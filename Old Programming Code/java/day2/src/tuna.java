import java.util.Scanner;


class tuna {
	public static void main(String args[]) {
		Scanner input = new Scanner(System.in);
		apples appleobject = new apples();
		
		System.out.println("Enter the name of first girlfriend here ");
		String temp = input.nextLine();
		appleobject.setName(temp);
		appleobject.saying();
	}
}
