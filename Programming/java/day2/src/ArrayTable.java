
class ArrayTable {

	public static void main(String[] args) {
		
		int bucky[] = {21,16,54,87,23};
		int sum = 0; 
		
		for(int counter = 0 ; counter < bucky.length; counter++) {
			
			sum += bucky[counter]; 
		}
		
		System.out.println(" The sum of these numbers is " + sum);
		
		
//		System.out.println("Index\tvalue");
//		
//		int bucky[]= {1,2,32,4,5,6,7};
//		
//		for(int counter = 0; counter <= bucky.length; counter++) {
//			
//			System.out.println(counter + "\t" + bucky[counter]);
//			
//		}

	}
}
