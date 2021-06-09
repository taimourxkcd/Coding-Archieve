import java.util.Scanner;

public class Switch {

	public static void main(String args[]) {
		
		int age = 7;
		
		switch (age) {
		case 1: 
			System.out.println("You can crawl ");
			break;
		case 2: 
			System.out.println("You can talk");
			break;
		case 3:
			System.out.println("You can get into trouble ");
		default:
			System.out.println("I dont know how old are you  ");
			break;
			
		}

	}

}
