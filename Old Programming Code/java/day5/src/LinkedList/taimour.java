package LinkedList;

import java.util.*;


public class taimour {

	public static void main(String[] args) {

		String[] things = {"apples" , "noobs" , "poradge", "bacon", "goATs" };
		List<String> list1 = new LinkedList<String>();
		
		for(String x: things ) {
			list1.add(x);
			
		}
		
		String[] things2 = {"sausage ", "bacon", "goats", "harrypotter"};
		List<String> list2 = new LinkedList<String>();
		
		for(String y: things2) {
			list2.add(y);
			
		}
		
		
		list1.addAll(list2);
		list2 = null;
		
		printMe(list1);
		removeStuff(list1, 2, 5);
		printMe(list1);
		reverseMe(list1);
		
		
		
	}

	//printme method 
	private static void printMe(List<String> l) {
		for(String b: l) {
			System.out.printf("%s  ",b);
			
		}
		System.out.println();
	}
	
	// remove stuff method 
	
	private static void removeStuff(List<String> l, int from , int to ) {
		l.subList(from, to ).clear();
	}
	
	//reverse me method 
	
	private static void reverseMe(List<String> l) {
		 ListIterator<String> bobby = l.listIterator(l.size());
		 while(bobby.hasPrevious()) {
			 System.out.printf("%s  ", bobby.previous());
		 }
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
