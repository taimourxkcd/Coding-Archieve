package Programs;

import java.util.*;

public class Hashset {

	public static void main(String[] args) {
		
		String[] things = {"apple", "banana ", "banana" , "orange", "fatima"};
		
		List<String> list = Arrays.asList(things);
		System.out.printf("%s ", list);
		System.out.println();

		
		Set<String> set = new HashSet<String>(list);
		System.out.printf("%s",set);
		
	
	
	}

}

// THIS PROGRAM IS NOT WORKING AS IT SHOULD ????????????????