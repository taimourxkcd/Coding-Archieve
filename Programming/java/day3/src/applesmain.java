
class applesmain {
	public static void main(String[] args) {
		tuna tunaobject = new tuna();
		
		System.out.println(tunaobject.toMiltary());
		System.out.println(tunaobject.toString());
		
		tunaobject.setTime(13,27,6);
		System.out.println(tunaobject.toMiltary());
		System.out.println(tunaobject.toString());
	}
}
