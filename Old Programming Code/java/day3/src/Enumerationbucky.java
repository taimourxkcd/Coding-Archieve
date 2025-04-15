
public enum Enumerationbucky {
	 
	buckey("nice" , "21"),
	noone("cutie","10"),
	julia("Bigmistake","12"),
	nicole("italian","13"),
	candy("different", "14"),
	erin("iwish","16" );
	
	private final String desc;
	private final String year;
	
	Enumerationbucky(String description , String birthday){
		desc = description;
		year = birthday;
	}
	
	public String getDesc() {
		return desc;
		
	}
	
	public String getYear() {
		return year;
	}

}
