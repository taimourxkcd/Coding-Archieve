package Collection;

import java.util.*; 

public class taimour {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		String[] things = {"eggs", "lasers", "hats", "pies"};
		List<String> list1 = new ArrayList<String>();
		
		//add array items to the list 
		for(String x: things ) {
			list1.add(x);
		}
		
		String[] morethings = {"lasers", "hats"};
		List<String> list2 = new ArrayList<String>();
	
	
		for(String y: morethings ) {
			list2.add(y);
		}
		
		//print out list number 1
		for(int i=0; i<list1.size(); i++) {
			System.out.printf("%s ", list1.get(i));
		}
	
	    editlist(list1, list2);
		System.out.println();
		
		 //print out list number 2
		 for(int i=0; i<list1.size(); i++) {
				System.out.printf("%s ", list1.get(i));
			}
		
			
			
		 

	}
	

	public static void editlist(Collection<String> l1, Collection<String> l2) {
		Iterator<String> it = l1.iterator();
		while(it.hasNext()) {
			if(l2.contains(it.next()))
				it.remove();
		}
	}
	 
	
} 
