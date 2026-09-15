library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_arith.ALL;
use IEEE.STD_LOGIC_unsigned.ALL;

entity BoothAlgorhitm is
	Port (A: in std_logic_vector(8 downto 0);
            R: in std_logic_vector(8 downto 0);
            Product: out std_logic_vector(16 downto 0)
         );
end BoothAlgorhitm;

architecture Behavioral of BoothAlgorhitm is

signal MultR: std_logic_vector(7 downto 0);
signal SumA, ResA, cadA, ACo2,RCo2: std_logic_vector(15 downto 0);
signal ProduCo2: std_logic_vector(15 downto 0);
signal M0,M1,M2,M3,M4,M5,M6,M7,M8: std_logic_vector(15 downto 0);

signal aux1, aux2, aux3, aux4, aux5, aux6 : STD_LOGIC_VECTOR(15 downto 0);
signal VECS01, VECC01 : STD_LOGIC_VECTOR(15 downto 0);
signal VECS02, VECC02 : STD_LOGIC_VECTOR(15 downto 0);
signal VECS03, VECC03 : STD_LOGIC_VECTOR(15 downto 0);
signal VECS04, VECC04 : STD_LOGIC_VECTOR(15 downto 0);
signal VECS05, VECC05 : STD_LOGIC_VECTOR(15 downto 0);
signal SF, CF, F: STD_LOGIC_VECTOR(15 downto 0);


-- Components 

component FullAdder16bits is
      Port (A: in std_logic_vector(15 downto 0);
          R: in std_logic_vector(15 downto 0);
          Cout: out STD_LOGIC;
          S: out std_logic_vector(15 downto 0)
          );
end component;

component CarrySave is
      Port (
          X : in STD_LOGIC_VECTOR(15 downto 0);
          Y : in STD_LOGIC_VECTOR(15 downto 0);
          Z : in STD_LOGIC_VECTOR(15 downto 0);
          S : out STD_LOGIC_VECTOR(15 downto 0);
          Ca : out STD_LOGIC_VECTOR(15 downto 0)
          );
end component;
  
begin

-- Booth 

-- Complemento a 2 

cadA <= X"00" & A(7 downto 0);

C1: FullAdder16bits port map(A(15 downto 0) => not(cadA(15 downto 0)), R(15 downto 0) => X"0001", S(15 downto 0) => ACo2(15 downto 0));
C2: FullAdder16bits port map(A(15 downto 0) => not(X"00" & R(7 downto 0)), R(15 downto 0) => X"0001",  S(15 downto 0) => RCo2(15 downto 0));

MultR <=  R(7 downto 0) when R(8) = '0' else 
          RCo2(7 downto 0); 

SumA <=  cadA(15 downto 0) when A(8) = '0' else 
         ACo2(15 downto 0); 
ResA <= cadA(15 downto 0) when A(8) = '1' else 
        ACo2(15 downto 0);

-- Productos parciales 

-- M0: Depende de MultR(1) y MultR(0)

M0 <= ResA(15 downto 0) when MultR(0) = '1' else (others => '0');

-- M1 
M1 <= SumA(14 downto 0) & '0'  when MultR(1) = '0' and MultR(0) = '1' else
      ResA(14 downto 0) & '0' when MultR(1) = '1' and MultR(0) = '0' else
      (others => '0');

-- M2: Depende de MultR(2) y MultR(1)
M2 <= SumA(13 downto 0) & "00"  when MultR(2) = '0' and MultR(1) = '1' else
      ResA(13 downto 0) & "00" when MultR(2) = '1' and MultR(1) = '0' else
      (others => '0');

-- M3: Depende de MultR(3) y MultR(2)
M3 <= SumA(12 downto 0) & "000"  when MultR(3) = '0' and MultR(2) = '1' else
      ResA(12 downto 0) & "000" when MultR(3) = '1' and MultR(2) = '0' else
      (others => '0');

-- M4: Depende de MultR(4) y MultR(3)
M4 <=  SumA(11 downto 0) & "0000"  when MultR(4) = '0' and MultR(3) = '1' else
       ResA(11 downto 0) & "0000" when MultR(4) = '1' and MultR(3) = '0' else
      (others => '0');

-- M5: Depende de MultR(5) y MultR(4)
M5 <=  SumA(10 downto 0) & "00000"  when MultR(5) = '0' and MultR(4) = '1' else
       ResA(10 downto 0) & "00000" when MultR(5) = '1' and MultR(4) = '0' else
      (others => '0');

-- M6: Depende de MultR(6) y MultR(5)
M6 <=  SumA(9 downto 0) & "000000"  when MultR(6) = '0' and MultR(5) = '1' else
       ResA(9 downto 0) & "000000" when MultR(6) = '1' and MultR(5) = '0' else
      (others => '0');

-- M7: Depende de MultR(7) y MultR(6)
M7 <=  SumA(8 downto 0) & "0000000"  when MultR(7) = '0' and MultR(6) = '1' else
       ResA(8 downto 0) & "0000000" when MultR(7) = '1' and MultR(6) = '0' else
      (others => '0');

-- M8: Depende de MultR(8) y MultR(7)
M8 <= SumA(7 downto 0) & "00000000"  when  MultR(7) = '1' else
      (others => '0');

--Product(16) <= A(8) xor R(8);
--Product(15 downto 0) <= M0 + M1 + M2 +M3 +M4 +M5+ M6+ M7+ M8 ;      

CSA1:CarrySave port map(X(15 downto 0) => M0(15 downto 0), 
				Y(15 downto 0) => M1(15 downto 0), 
				Z(15 downto 0) => M2(15 downto 0),
				S(15 downto 0) => VECS01(15 downto 0), 
			      Ca(15 downto 0) => aux1(15 downto 0));
									
				VECC01 <= aux1(14 downto 0) & '0';
	
CSA2:CarrySave port map(X(15 downto 0) => M3(15 downto 0), 
				Y(15 downto 0) => M4(15 downto 0), 
      			Z(15 downto 0) => M5(15 downto 0),
				S(15 downto 0) => VECS02(15 downto 0), 
				Ca(15 downto 0) => aux2(15 downto 0));
									
				VECC02 <= aux2(14 downto 0) & '0';
									
CSA3:CarrySave port map(X(15 downto 0) => VECC01(15 downto 0), 
				Y(15 downto 0) => VECS01(15 downto 0), 
				Z(15 downto 0) => VECS02(15 downto 0),
		      	S(15 downto 0) => VECS03(15 downto 0), 
				Ca(15 downto 0) => aux3(15 downto 0));
									
				VECC03 <= aux3(14 downto 0) & '0';
									
CSA4:CarrySave port map(X(15 downto 0) => VECC02(15 downto 0), 
				Y(15 downto 0) => M6(15 downto 0), 
				Z(15 downto 0) => M7(15 downto 0),
			      S(15 downto 0) => VECS04(15 downto 0), 
				Ca(15 downto 0) => aux4(15 downto 0));
									
				VECC04 <= aux4(14 downto 0) & '0';
									
CSA5:CarrySave port map(X(15 downto 0) => VECS03(15 downto 0), 
				Y(15 downto 0) => VECC03(15 downto 0), 
				Z(15 downto 0) => VECS04(15 downto 0),
			      S(15 downto 0) => VECS05(15 downto 0), 
				Ca(15 downto 0) => aux5(15 downto 0));
									
				VECC05 <= aux5(14 downto 0) & '0';
									
CSA6:CarrySave port map(X(15 downto 0) => VECC04(15 downto 0), 
				Y(15 downto 0) => VECS05(15 downto 0), 
				Z(15 downto 0) => VECC05(15 downto 0),
			      S(15 downto 0) => SF(15 downto 0), 
		      	Ca(15 downto 0) => aux6(15 downto 0));
									
				CF <= aux6(14 downto 0) & '0';
                  
--C3: FullAdder16bits port map(A(15 downto 0) => CF(15 downto 0), R(15 downto 0) => SF(15 downto 0), S(15 downto 0) => F(15 downto 0));

F<=CF+SF;

Product(15 downto 0) <= F;
Product(16) <= A(8) xor R(8); 
end Behavioral;

