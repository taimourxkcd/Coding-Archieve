 package Programs;

 import java.util.*;
 
public class ReverseAndCopy {

	public static void main(String[] args) {
		
		 // create and array and convert to list 
		Character[] ray = {'p','w','n'};
		List<Character> l = Arrays.asList(ray);
		System.out.println("List is : ");
		output(l);
			
		// reverse and t=print the list 

		Collections.reverse(l);
		System.out.println("After the reverse : ");
		output(l);
		
		// create a new array and a new list 
		Character[] newRay = new Character[3];
		List<Character> listcopy = Arrays.asList(newRay);
		
		// copy the list of the contents from the list to listcopy  
		Collections.copy(listcopy, l);
		System.out.println("Copy the list  : ");
		output(listcopy);
		
		// fills collection with the crap 
		Collections.fill(l, 'X');
		System.out.println("After filling the list : ");
		output(l);
		
	}

	//ouput mehtod
	private static void output(List<Character> thelist) {
		for(Character thing: thelist)
			System.out.printf("%s ",thing  );
		System.out.println(); 
	}
	
	
	
	
	
	
}
