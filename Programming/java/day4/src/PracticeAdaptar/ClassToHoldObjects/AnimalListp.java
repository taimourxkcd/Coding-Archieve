package ClassToHoldObjects;

public class AnimalListp {
	
	private Animalp[]  thelist = new Animalp[5];
	
	private int i =0 ;
	
	public void add(Animalp a) {
		if(i<thelist.length) {
			thelist[i] = a;
			System.out.println("Animal added at the index " + i);
			i++;
			
		}
	}

}
