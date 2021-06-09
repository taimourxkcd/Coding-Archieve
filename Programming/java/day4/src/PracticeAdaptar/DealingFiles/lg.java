package DealingFiles;

import java.util.*;

public class lg {

	public static void main(String[] args) {

		// TODO Auto-generated method stub

		final Formatter x;
		
		
		
		try {
			x = new Formatter("newfile.txt");
			System.out.println(" The book has been created !!! ");
			
			
		}
		catch(Exception event ) {
			System.out.println("There is an error ");
		}
		
	}

}
