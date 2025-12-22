class Swapwithoutthird{
	public static void main (String[]args){
		int a=24;
		int b=45;
		a = a + b;
		b = a - b;
		a = a - b;
		System.out.println("The value of a is");
		System.out.println(a);
		System.out.println("The value of b is");
		System.out.println(b);
}
}