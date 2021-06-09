
class ArraysInMethods {

	public static void main(String[] args) {
		
		int bucky[] = {1,2,3,4,5,6};
		change(bucky);
		
		for(int y: bucky) {
			System.out.println(y);
		}
	}
	
	public static void change(int x[]) {
		
		for(int counter =0 ; counter <x.length ; counter++) {
			x[counter] += 5;
			
		}
	}

}
