
public class tuna3 {
	private String name;
	private ToString birthday;
	
	public tuna3(String theName, ToString theDate) {
		name = theName;
		birthday = theDate;
		
	}
	
	public String toString() {
		return String.format("My name is %s, my birthday is %s ",name , birthday);
	}
}
