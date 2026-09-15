library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity FullAdder16bits is
Port (A: in std_logic_vector(15 downto 0);
      R: in std_logic_vector(15 downto 0);
      Cout: out STD_LOGIC;
      S: out std_logic_vector(15 downto 0)
      );
end FullAdder16bits;

architecture Behavioral of FullAdder16bits is

signal Carry: std_logic_vector(14 downto 0);

begin

	--  LSB 
	S(0) <= A(0) xor R(0);
	Carry(0) <= (A(0) AND R(0));

	-- Bit1 
	S(1) <= A(1) xor R(1) xor Carry(0);
	Carry(1) <= (A(1) AND R(1)) OR (Carry(0) AND (A(1) xor R(1)));

	-- Bit2
	S(2) <= A(2) xor R(2) xor Carry(1);
	Carry(2) <= (A(2) AND R(2)) OR (Carry(1) AND (A(2) xor R(2)));

	-- Bit3
	S(3) <= A(3) xor R(3) xor Carry(2);
	Carry(3) <= (A(3) AND R(3)) OR (Carry(2) AND (A(3) xor R(3)));

	-- Bit4
	S(4) <= A(4) xor R(4) xor Carry(3);
	Carry(4) <= (A(4) AND R(4)) OR (Carry(3) AND (A(4) xor R(4)));

	-- Bit5
	S(5) <= A(5) xor R(5) xor Carry(4);
	Carry(5) <= (A(5) AND R(5)) OR (Carry(4) AND (A(5) xor R(5)));

	-- Bit6
	S(6) <= A(6) xor R(6) xor Carry(5);
	Carry(6) <= (A(6) AND R(6)) OR (Carry(5) AND (A(6) xor R(6)));

	-- Bit7
	S(7) <= A(7) xor R(7) xor Carry(6);
	Carry(7) <= (A(7) AND R(7)) OR (Carry(6) AND (A(7) xor R(7)));

	-- Bit8
	S(8) <= A(8) xor R(8) xor Carry(7);
	Carry(8) <= (A(8) AND R(8)) OR (Carry(7) AND (A(8) xor R(8)));

	-- Bit9
	S(9) <= A(9) xor R(9) xor Carry(8);
	Carry(9) <= (A(9) AND R(9)) OR (Carry(8) AND (A(9) xor R(9)));

	-- Bit10
	S(10) <= A(10) xor R(10) xor Carry(9);
	Carry(10) <= (A(10) AND R(10)) OR (Carry(9) AND (A(10) xor R(10)));

	-- Bit11
	S(11) <= A(11) xor R(11) xor Carry(10);
	Carry(11) <= (A(11) AND R(11)) OR (Carry(10) AND (A(11) xor R(11)));

	-- Bit12
	S(12) <= A(12) xor R(12) xor Carry(11);
	Carry(12) <= (A(12) AND R(12)) OR (Carry(11) AND (A(12) xor R(12)));

	-- Bit13
	S(13) <= A(13) xor R(13) xor Carry(12);
	Carry(13) <= (A(13) AND R(13)) OR (Carry(12) AND (A(13) xor R(13)));

	-- Bit14
	S(14) <= A(14) xor R(13) xor Carry(13);
	Carry(14) <= (A(14) AND R(14)) OR (Carry(13) AND (A(14) xor R(14)));

	-- MSB
	S(15) <= A(15) xor R(15) xor Carry(14);
	Cout <= (A(15) AND R(15)) OR (Carry(14) AND (A(15) xor R(15)));

end Behavioral;