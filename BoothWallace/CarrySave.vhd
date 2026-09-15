library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity CarrySave is
    Port (
        X : in STD_LOGIC_VECTOR(15 downto 0);
        Y : in STD_LOGIC_VECTOR(15 downto 0);
        Z : in STD_LOGIC_VECTOR(15 downto 0);
        S : out STD_LOGIC_VECTOR(15 downto 0);
        Ca : out STD_LOGIC_VECTOR(15 downto 0));
end CarrySave;


architecture Behavioral of CarrySave is

begin

	S <= (X xor Y) xor Z;
	Ca <= (X and Y) or (X and Z) or (Y and Z);

end Behavioral;