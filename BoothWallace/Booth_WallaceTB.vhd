library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity tb_Booth_Wallace is end tb_Booth_Wallace;

architecture sim of tb_Booth_Wallace is
    signal A, R : std_logic_vector(8 downto 0) := (others => '0');
    signal P    : std_logic_vector(16 downto 0);
begin
    dut: entity work.Booth_Wallace port map (A => A, R => R, Product => P);

    process
        variable esperado : integer;
        variable errores  : integer := 0;
    begin
        for i in 0 to 255 loop
            for j in 0 to 255 loop
                A <= '0' & std_logic_vector(to_unsigned(i, 8));
                R <= '0' & std_logic_vector(to_unsigned(j, 8));
                wait for 1 ns;
                esperado := i * j;
                if to_integer(unsigned(P(15 downto 0))) /= esperado or P(16) /= '0' then
                    errores := errores + 1;
                end if;
            end loop;
        end loop;
        report "Errores (magnitud positiva): " & integer'image(errores);
        -- Prueba de signo
        A <= '1' & x"05"; R <= '0' & x"07"; wait for 1 ns;
        assert P(16) = '1' and unsigned(P(15 downto 0)) = 35 report "Fallo signo" severity error;
        report "Fin de simulacion";
        wait;
    end process;
end sim;