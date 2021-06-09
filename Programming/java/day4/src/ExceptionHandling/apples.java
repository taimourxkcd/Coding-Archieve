package ExceptionHandling;

import java.util.*;

public class apples {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int x=1;
		
		
	do {	
		Scanner input = new Scanner(System.in);
		try {
		System.out.println("Please enter the first number ");
		int n1 = input.nextInt();

		System.out.println("Please enter the second number ");
		int n2 = input.nextInt();
	
		int sum = n1/n2;
		System.out.printf("ans = %d ", sum);
	 
		x=2;
	}
		catch(Exception e) {
			
			System.out.println("An error has occured ");
			
		}
	}while( x==1);

	}
}

