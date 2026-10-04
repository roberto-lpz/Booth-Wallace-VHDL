library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity FullAdder16bits is
    Port (A    : in  std_logic_vector(15 downto 0);
          R    : in  std_logic_vector(15 downto 0);
          Cout : out STD_LOGIC;
          S    : out std_logic_vector(15 downto 0));
end FullAdder16bits;

architecture Behavioral of FullAdder16bits is
    signal Carry : std_logic_vector(14 downto 0);
begin
    -- LSB
    S(0)     <= A(0) xor R(0);
    Carry(0) <= A(0) and R(0);

    -- Bits 1 a 14
    gen_bits: for i in 1 to 14 generate
        S(i)     <= A(i) xor R(i) xor Carry(i-1);
        Carry(i) <= (A(i) and R(i)) or (Carry(i-1) and (A(i) xor R(i)));
    end generate;

    -- MSB
    S(15) <= A(15) xor R(15) xor Carry(14);
    Cout  <= (A(15) and R(15)) or (Carry(14) and (A(15) xor R(15)));
end Behavioral;