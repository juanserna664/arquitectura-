----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    21:47:13 10/09/2016 
-- Design Name: 
-- Module Name:    RF - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity RF is
    Port ( rs1 : in  STD_LOGIC_VECTOR (5 downto 0);
           rs2 : in  STD_LOGIC_VECTOR (5 downto 0);
           rd : in  STD_LOGIC_VECTOR (5 downto 0);
           reset : in  STD_LOGIC;
           datawrite : in  STD_LOGIC_VECTOR (31 downto 0);
           CRs1 : out  STD_LOGIC_VECTOR (31 downto 0);
           CRs2 : out  STD_LOGIC_VECTOR (31 downto 0));
end RF;

architecture Behavioral of RF is

	type ram is array (0 to 39) of std_logic_vector (31 downto 0);
	signal registro : ram := (others => x"00000000");
begin

	process(reset,rs1,rs2,rd,datawrite)
	begin
	
			if(reset = '1')then
				CRs1 <= (others=>'0');
				CRs2 <= (others=>'0');				
				registro <= (others => x"00000000");
				
			else
				CRs1 <= registro(conv_integer(rs1));
				CRs2 <= registro(conv_integer(rs2));
				if(rd /= "00000")then  
					registro(conv_integer(rd)) <= datawrite;
				end if;
			end if;
			
	end process;

end Behavioral;