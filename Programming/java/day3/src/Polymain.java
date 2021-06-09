
public class Polymain {

	public static void main(String[] args) {
		
		PolyCombine taimour[] = new PolyCombine[2];
		taimour[0] = new Poly();
		taimour[1] = new Poly2();
		
		for(int x=0; x<2 ; ++x) {
			taimour[x].eat();
		}
		
		

	}

}
