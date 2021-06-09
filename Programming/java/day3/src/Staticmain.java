
public class Staticmain {

	public static void main(String[] args) {
		
		StaticHelper member1 =  new StaticHelper("Megan ", "Fox");
		StaticHelper member2 =  new StaticHelper("Natlie ", "Portman");
		StaticHelper member3 =  new StaticHelper("Taylor ", "Swift");
		
		System.out.println(StaticHelper.getMembers());
//		System.out.println(member3.getFirst());
//		System.out.println(member3.getLast());
//		System.out.println(member3.getMembers());

	}

}
 