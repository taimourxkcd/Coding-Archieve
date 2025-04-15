package ClassToHoldObjects2;

public class MammalList {
	
	private Mammal[] thelist = new Mammal[5];
	
	private int i = 0;
	
	
	public void add(Mammal m) {
		
		if(i<thelist.length) {
			thelist[i] = m;
	
			System.out.println("Mammal added at the index " + i);
			i++;

		}
		
	}
		
	

}
