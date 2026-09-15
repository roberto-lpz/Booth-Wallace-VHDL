library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_arith.ALL;
use IEEE.STD_LOGIC_unsigned.ALL;

--  Declaracion de entidad 

entity Booth_Wallace is
	Port (A: in std_logic_vector(8 downto 0); -- Operandos 
            R: in std_logic_vector(8 downto 0);
            Product: out std_logic_vector(16 downto 0) -- Producto
	         );
end Booth_Wallace;
architecture Behavioral of Booth_Wallace is
 -- Señales para el algoritmo de booth
signal SumA, ResA, cadA, ACo2,RCo2: std_logic_vector(15 downto 0);
signal ProduCo2: std_logic_vector(15 downto 0);
signal M0,M1,M2,M3,M4,M5,M6,M7,M8: std_logic_vector(15 downto 0);

-- Señales para la conexion del arbol de wallace
signal aux1, aux2, aux3, aux4, aux5, aux6, aux7 : STD_LOGIC_VECTOR(19 downto 0);
signal VECS01, VECC01 : STD_LOGIC_VECTOR(19 downto 0);
signal VECS02, VECC02 : STD_LOGIC_VECTOR(19 downto 0);
signal VECS03, VECC03 : STD_LOGIC_VECTOR(19 downto 0);
signal VECS04, VECC04 : STD_LOGIC_VECTOR(19 downto 0);
signal VECS05, VECC05 : STD_LOGIC_VECTOR(19 downto 0);
signal VECS06, VECC06 : STD_LOGIC_VECTOR(19 downto 0);
signal VECS07, VECC07 : STD_LOGIC_VECTOR(19 downto 0);
signal SF, CF, F: STD_LOGIC_VECTOR(19 downto 0);


-- Declaracion de los componentes 

component FullAdder16bits is
      Port (A: in std_logic_vector(15 downto 0);
          R: in std_logic_vector(15 downto 0);
          Cout: out STD_LOGIC;
          S: out std_logic_vector(15 downto 0)
          );
end component;

component CarrySave is
      Port (
          X : in STD_LOGIC_VECTOR(19 downto 0);
          Y : in STD_LOGIC_VECTOR(19 downto 0);
          Z : in STD_LOGIC_VECTOR(19 downto 0);
          S : out STD_LOGIC_VECTOR(19 downto 0);
          Ca : out STD_LOGIC_VECTOR(19 downto 0)
          );
end component;
  
begin

-- Algortimo de booth

cadA <= X"00" & A(7 downto 0);
-- Complemento a 2 para restar el multplicando 
C1: FullAdder16bits port map(A(15 downto 0) => not(cadA(15 downto 0)), R(15 downto 0) => X"0001", S(15 downto 0) => ACo2(15 downto 0));

SumA <=  cadA(15 downto 0); 
ResA <= ACo2(15 downto 0);

-- Productos parciales 

-- M0
M0 <= ResA(15 downto 0) when R(0) = '1' else (others => '0');

-- M1 
M1 <= SumA(14 downto 0) & '0'  when R(1) = '0' and R(0) = '1' else
      ResA(14 downto 0) & '0' when R(1) = '1' and R(0) = '0' else
      (others => '0');

-- M2: 
M2 <= SumA(13 downto 0) & "00"  when R(2) = '0' and R(1) = '1' else
      ResA(13 downto 0) & "00" when R(2) = '1' and R(1) = '0' else
      (others => '0');

-- M3: 
M3 <= SumA(12 downto 0) & "000"  when R(3) = '0' and R(2) = '1' else
      ResA(12 downto 0) & "000" when R(3) = '1' and R(2) = '0' else
      (others => '0');

-- M4: 
M4 <=  SumA(11 downto 0) & "0000"  when R(4) = '0' and R(3) = '1' else
       ResA(11 downto 0) & "0000" when R(4) = '1' and R(3) = '0' else
      (others => '0');

-- M5: 
M5 <=  SumA(10 downto 0) & "00000"  when R(5) = '0' and R(4) = '1' else
       ResA(10 downto 0) & "00000" when R(5) = '1' and R(4) = '0' else
      (others => '0');

-- M6: 
M6 <=  SumA(9 downto 0) & "000000"  when R(6) = '0' and R(5) = '1' else
       ResA(9 downto 0) & "000000" when R(6) = '1' and R(5) = '0' else
      (others => '0');

-- M7: 
M7 <=  SumA(8 downto 0) & "0000000"  when R(7) = '0' and R(6) = '1' else
       ResA(8 downto 0) & "0000000" when R(7) = '1' and R(6) = '0' else
      (others => '0');

-- M8
M8 <= SumA(7 downto 0) & "00000000"  when  R(7) = '1' else
      (others => '0');

-- Conexion del arbol de wallace 

CSA1:CarrySave port map(X(19 downto 0) => "0000" & M0(15 downto 0), 
								Y(19 downto 0) => "0000" & M1(15 downto 0), 
								Z(19 downto 0) => "0000" & M2(15 downto 0),
								S(19 downto 0) => VECS01(19 downto 0), 
								Ca(19 downto 0) => aux1(19 downto 0));
									
								VECC01 <= aux1(18 downto 0) & '0';
	
CSA2:CarrySave port map(X(19 downto 0) => "0000" & M3(15 downto 0), 
								Y(19 downto 0) => "0000" & M4(15 downto 0), 
								Z(19 downto 0) => "0000" & M5(15 downto 0),
								S(19 downto 0) => VECS02(19 downto 0), 
								Ca(19 downto 0) => aux2(19 downto 0));
									
								VECC02 <= aux2(18 downto 0) & '0';
									
CSA3:CarrySave port map(X(19 downto 0) => "0000" & M6(15 downto 0), 
								Y(19 downto 0) => "0000" & M7(15 downto 0), 
								Z(19 downto 0) => "0000" & M8(15 downto 0),
								S(19 downto 0) => VECS03(19 downto 0), 
								Ca(19 downto 0) => aux3(19 downto 0));
									
								VECC03 <= aux3(18 downto 0) & '0';
									
CSA4:CarrySave port map(X(19 downto 0) => VECC01(19 downto 0), 
								Y(19 downto 0) => VECS01(19 downto 0), 
								Z(19 downto 0) => VECC02(19 downto 0),
								S(19 downto 0) => VECS04(19 downto 0), 
								Ca(19 downto 0) => aux4(19 downto 0));
									
								VECC04 <= aux4(18 downto 0) & '0';
									
CSA5:CarrySave port map(X(19 downto 0) => VECS02(19 downto 0), 
								Y(19 downto 0) => VECC03(19 downto 0), 
								Z(19 downto 0) => VECS03(19 downto 0),
								S(19 downto 0) => VECS05(19 downto 0), 
								Ca(19 downto 0) => aux5(19 downto 0));
									
								VECC05 <= aux5(18 downto 0) & '0';
									
CSA6:CarrySave port map(X(19 downto 0) => VECC05(19 downto 0), 
								Y(19 downto 0) => VECS04(19 downto 0), 
								Z(19 downto 0) => VECC04(19 downto 0),
								S(19 downto 0) => VECS06(19 downto 0), 
								Ca(19 downto 0) => aux6(19 downto 0));
									
								VECC06 <= aux6(18 downto 0) & '0';
								
CSA7:CarrySave port map(X(19 downto 0) => VECC06(19 downto 0), 
								Y(19 downto 0) => VECS06(19 downto 0), 
								Z(19 downto 0) => VECS05(19 downto 0),
								S(19 downto 0) => SF(19 downto 0), 
								Ca(19 downto 0) => aux7(19 downto 0));
								
								CF <= aux7(18 downto 0) & '0';
    -- Suma del vector acarreo y vector de suma finales             
C3: FullAdder16bits port map(A(15 downto 0) => CF(15 downto 0), R(15 downto 0) => SF(15 downto 0), S(15 downto 0) => F(15 downto 0));
-- Signo del producto 
Product(16) <= A(8) xor R(8);

Product(15 downto 0) <= F(15 downto 0);

end Behavioral;