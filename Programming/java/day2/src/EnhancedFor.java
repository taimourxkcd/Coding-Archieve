
class EnhancedFor {

	public static void main(String[] args) {
		
		int bucky[] = {3,4,5,6,7,8,9};
		int total = 0; 
		
		for(int x: bucky) {
			total += x;
		}
		
	System.out.println(total);	

	}

}