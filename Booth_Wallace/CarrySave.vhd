library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity CarrySave is
    Port (
        X : in STD_LOGIC_VECTOR(19 downto 0);
        Y : in STD_LOGIC_VECTOR(19 downto 0);
        Z : in STD_LOGIC_VECTOR(19 downto 0);
        S : out STD_LOGIC_VECTOR(19 downto 0);
        Ca : out STD_LOGIC_VECTOR(19 downto 0));
end CarrySave;


architecture Behavioral of CarrySave is

begin
    -- Suma de los tres operandos
	S <= (X xor Y) xor Z;
    -- Vector de acarreo
	Ca <= (X and Y) or (X and Z) or (Y and Z);

end Behavioral;