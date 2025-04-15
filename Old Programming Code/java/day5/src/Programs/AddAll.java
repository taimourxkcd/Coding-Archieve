package Programs;

import java.util.*;

public class AddAll {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		//convert stuff array to the list 	
		String[] stuff = {"apple", "orange","digg" ,"bananan", "melon"};
		
		List<String> list1 = Arrays.asList(stuff);
		
		ArrayList<String> list2 = new ArrayList<String>(); 
		list2.add("website");
		list2.add("youtube");
		list2.add("digg ");
		
		for(String x: list2)
			System.out.printf("%s ", x);
		
		Collections.addAll(list2, stuff);
		System.out.println();
		
		for(String x: list2)
			System.out.printf("%s ", x);
		
	
		System.out.println();
		System.out.println(Collections.frequency(list2, "digg"));
		
		boolean tof = Collections.disjoint(list1, list2);
		System.out.println(tof);                               // false means they have elements in common 
		
		if(tof)
			System.out.println("These lists do not have anything in common ");
		else
			System.out.println("These lists must have something in common ");
	
	
	
	
	}
	
	
	
	

}
