package Programs;

public class GnereicMethod {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Integer[] iray = {1,2,3,4,5};
		Character[] cray = {'b','c','d','e','f'};
		
		printMe(iray);
		printMe(cray);

	}
	
//	public static void printMe(Integer[] i) {
//		for(Integer x : i)
//			System.out.printf("%s", x);
//		System.out.println();
//	}
//	
//	public static void printMe(Character[] i) {
//		for(Character x : i)
//			System.out.printf("%s", x);
//		System.out.println();
//	}
//	
	// Generic method 
	
	public static <T> void printMe(T[] x) {
		for(T b : x)
			System.out.printf("%s ", b);
		System.out.println();
	}
	
	
	

}
