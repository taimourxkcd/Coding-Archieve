
public class VariableLengthArgument {

	public static void main(String[] args) {
		
		System.out.println(average(45,58,6,58,58));

	}

	public static int average(int...numbers) {
		int total = 0;
		for(int x: numbers ) {
			total += x;
		}
		
		return total/numbers.length;
	}
}
