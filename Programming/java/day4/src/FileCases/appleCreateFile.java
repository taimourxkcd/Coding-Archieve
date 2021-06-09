package FileCases;

import java.util.*;


public class appleCreateFile {

	public static void main(String[] args) {
		

		final Formatter x;
		
		try {
			x = new Formatter("fred.txt");
			System.out.println("Your fucking file has been created !!");
		}

		catch(Exception e) {
			System.out.println("There is an error biatchhh!!");
		}
	}

}
