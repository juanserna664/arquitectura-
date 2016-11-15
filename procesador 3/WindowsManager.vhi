
-- VHDL Instantiation Created from source file WindowsManager.vhd -- 20:46:14 05/16/2016
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT WindowsManager
	PORT(
		op : IN std_logic_vector(1 downto 0);
		op3 : IN std_logic_vector(5 downto 0);
		rd : IN std_logic_vector(4 downto 0);
		rs1 : IN std_logic_vector(4 downto 0);
		rs2 : IN std_logic_vector(4 downto 0);
		CWP : IN std_logic;          
		nrs1 : OUT std_logic_vector(5 downto 0);
		nrs2 : OUT std_logic_vector(5 downto 0);
		nrd : OUT std_logic_vector(5 downto 0);
		ncwp : OUT std_logic;
		Registro07 : OUT std_logic_vector(5 downto 0)
		);
	END COMPONENT;

	Inst_WindowsManager: WindowsManager PORT MAP(
		op => ,
		op3 => ,
		rd => ,
		rs1 => ,
		rs2 => ,
		CWP => ,
		nrs1 => ,
		nrs2 => ,
		nrd => ,
		ncwp => ,
		Registro07 => 
	);


