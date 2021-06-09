package Programs;

import java.util.*;

public class GenericReturnType {

	public static void main(String[] args) {
		
		System.out.println(max(23,56,8));
		System.out.println(max("apples","eggs","chicken"));

	}
	
	public static <T extends Comparable<T>> T max(T a, T b, T c){
		
		T m = a;
		if(b.compareTo(a) > 0)
			m = b;
		if(c.compareTo(m) > 0)
			m = c;
		return m;
	}

}
