
class applesmain2 {

	public static void main(String[] args) {
		tuna2 tuna2object = new tuna2();
		tuna2 tuna2object2 = new tuna2(5);
		tuna2 tuna2object3 = new tuna2(5,4);
		tuna2 tuna2object4 = new tuna2(6,7,8);
		
		System.out.printf("%s\n ",tuna2object.toMiltary());
		System.out.printf("%s\n ",tuna2object2.toMiltary());
		System.out.printf("%s\n ",tuna2object3.toMiltary());
		System.out.printf("%s\n ",tuna2object4.toMiltary());
		
	}
}  