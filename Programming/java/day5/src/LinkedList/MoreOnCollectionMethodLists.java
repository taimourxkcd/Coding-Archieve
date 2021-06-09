package LinkedList;

import java.util.*;

public class MoreOnCollectionMethodLists {

	public static void main(String[] args) {
		
		String[] crap = {"Youtube", "lemons", "geese", "bacon", "apples" };
		
		List<String> l1 = Arrays.asList(crap);
		
		System.out.println(Arrays.asList(crap));
		
		
		Collections.sort(l1);
		System.out.printf("%s\n", l1);
	
		Collections.sort(l1, Collections.reverseOrder());
		System.out.printf("%s\n", l1);

	} 

}
