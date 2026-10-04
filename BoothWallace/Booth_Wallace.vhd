library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity Booth_Wallace is
    Port (A       : in  std_logic_vector(8 downto 0);  -- Operandos
          R       : in  std_logic_vector(8 downto 0);
          Product : out std_logic_vector(16 downto 0)); -- Producto
end Booth_Wallace;

architecture Behavioral of Booth_Wallace is
    -- Senales para el algoritmo de Booth
    signal SumA, ResA, cadA, cadA_n, ACo2 : std_logic_vector(15 downto 0);
    signal M0, M1, M2, M3, M4, M5, M6, M7, M8 : std_logic_vector(15 downto 0);
    constant UNO : std_logic_vector(15 downto 0) := X"0001";

    -- Productos parciales extendidos a 20 bits (entradas del arbol de Wallace)
    signal E0, E1, E2, E3, E4, E5, E6, E7, E8 : std_logic_vector(19 downto 0);

    -- Senales para la conexion del arbol de Wallace
    signal aux1, aux2, aux3, aux4, aux5, aux6, aux7 : std_logic_vector(19 downto 0);
    signal VECS01, VECC01 : std_logic_vector(19 downto 0);
    signal VECS02, VECC02 : std_logic_vector(19 downto 0);
    signal VECS03, VECC03 : std_logic_vector(19 downto 0);
    signal VECS04, VECC04 : std_logic_vector(19 downto 0);
    signal VECS05, VECC05 : std_logic_vector(19 downto 0);
    signal VECS06, VECC06 : std_logic_vector(19 downto 0);
    signal SF, CF         : std_logic_vector(19 downto 0);
    signal F              : std_logic_vector(15 downto 0);

    -- Declaracion de los componentes
    component FullAdder16bits is
        Port (A    : in  std_logic_vector(15 downto 0);
              R    : in  std_logic_vector(15 downto 0);
              Cout : out STD_LOGIC;
              S    : out std_logic_vector(15 downto 0));
    end component;

    component CarrySave is
        Port (X  : in  std_logic_vector(19 downto 0);
              Y  : in  std_logic_vector(19 downto 0);
              Z  : in  std_logic_vector(19 downto 0);
              S  : out std_logic_vector(19 downto 0);
              Ca : out std_logic_vector(19 downto 0));
    end component;

begin

    -- Algoritmo de Booth
    cadA   <= X"00" & A(7 downto 0);
    cadA_n <= not cadA;

    -- Complemento a 2 para restar el multiplicando
    C1: FullAdder16bits port map (A => cadA_n, R => UNO, Cout => open, S => ACo2);

    SumA <= cadA;
    ResA <= ACo2;

    -- Productos parciales
    M0 <= ResA when R(0) = '1' else (others => '0');

    M1 <= SumA(14 downto 0) & '0' when R(1) = '0' and R(0) = '1' else
          ResA(14 downto 0) & '0' when R(1) = '1' and R(0) = '0' else
          (others => '0');
    M2 <= SumA(13 downto 0) & "00" when R(2) = '0' and R(1) = '1' else
          ResA(13 downto 0) & "00" when R(2) = '1' and R(1) = '0' else
          (others => '0');
    M3 <= SumA(12 downto 0) & "000" when R(3) = '0' and R(2) = '1' else
          ResA(12 downto 0) & "000" when R(3) = '1' and R(2) = '0' else
          (others => '0');
    M4 <= SumA(11 downto 0) & "0000" when R(4) = '0' and R(3) = '1' else
          ResA(11 downto 0) & "0000" when R(4) = '1' and R(3) = '0' else
          (others => '0');
    M5 <= SumA(10 downto 0) & "00000" when R(5) = '0' and R(4) = '1' else
          ResA(10 downto 0) & "00000" when R(5) = '1' and R(4) = '0' else
          (others => '0');
    M6 <= SumA(9 downto 0) & "000000" when R(6) = '0' and R(5) = '1' else
          ResA(9 downto 0) & "000000" when R(6) = '1' and R(5) = '0' else
          (others => '0');
    M7 <= SumA(8 downto 0) & "0000000" when R(7) = '0' and R(6) = '1' else
          ResA(8 downto 0) & "0000000" when R(7) = '1' and R(6) = '0' else
          (others => '0');
    M8 <= SumA(7 downto 0) & "00000000" when R(7) = '1' else
          (others => '0');

    -- Extension a 20 bits
    E0 <= "0000" & M0;
    E1 <= "0000" & M1;
    E2 <= "0000" & M2;
    E3 <= "0000" & M3;
    E4 <= "0000" & M4;
    E5 <= "0000" & M5;
    E6 <= "0000" & M6;
    E7 <= "0000" & M7;
    E8 <= "0000" & M8;

    -- Arbol de Wallace
    CSA1: CarrySave port map (X => E0, Y => E1, Z => E2, S => VECS01, Ca => aux1);
    VECC01 <= aux1(18 downto 0) & '0';

    CSA2: CarrySave port map (X => E3, Y => E4, Z => E5, S => VECS02, Ca => aux2);
    VECC02 <= aux2(18 downto 0) & '0';

    CSA3: CarrySave port map (X => E6, Y => E7, Z => E8, S => VECS03, Ca => aux3);
    VECC03 <= aux3(18 downto 0) & '0';

    CSA4: CarrySave port map (X => VECC01, Y => VECS01, Z => VECC02, S => VECS04, Ca => aux4);
    VECC04 <= aux4(18 downto 0) & '0';

    CSA5: CarrySave port map (X => VECS02, Y => VECC03, Z => VECS03, S => VECS05, Ca => aux5);
    VECC05 <= aux5(18 downto 0) & '0';

    CSA6: CarrySave port map (X => VECC05, Y => VECS04, Z => VECC04, S => VECS06, Ca => aux6);
    VECC06 <= aux6(18 downto 0) & '0';

    CSA7: CarrySave port map (X => VECC06, Y => VECS06, Z => VECS05, S => SF, Ca => aux7);
    CF <= aux7(18 downto 0) & '0';

    -- Suma del vector acarreo y vector de suma finales
    C3: FullAdder16bits port map (A => CF(15 downto 0), R => SF(15 downto 0), Cout => open, S => F);

    -- Signo del producto
    Product(16)          <= A(8) xor R(8);
    Product(15 downto 0) <= F;

end Behavioral;