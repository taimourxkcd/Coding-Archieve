import java.util.EnumSet;


public class Enumerationmain {

	public static void main(String[] args) {
		
		for(Enumerationbucky people : Enumerationbucky.values() ) {
			System.out.printf("%s\t%s\t%s\n", people , people.getDesc(), people.getYear());
		
		} 
		
		System.out.println("\nAnd now for the range of constants !!!\n");

		for (Enumerationbucky people : EnumSet.range(Enumerationbucky.noone, Enumerationbucky.candy)) {
			System.out.printf("%s\t%s\t%s\n", people , people.getDesc(), people.getYear());
		}
	}
 
}
