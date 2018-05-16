public class MyMain {

	static int a=10;
	static MyArrayX myArray1;
	
	public static void main(String[] args) {
//		pract01(); //使用類別直接呼叫
//	    pract02(); //使用物件呼叫
//		pract03();
//		pract04();
		pract05();
	}

	public static void pract01() {
		int[] A= {100,500,350,60,105};
		MyArray.printArray(A);
		MyArray.bubbleSort(A,true);
		MyArray.printArray(A);		
		System.out.println(MyArray.extremeValueOfArray(A,false));		
	}
	
	public static void pract02() {
		int[] A= {100,500,350,60,105};
		myArray1 = new MyArrayX();
		MyArrayX myArray2 = new MyArrayX();
		MyArrayX myArray3 = new MyArrayX();
		myArray1.printArray(A);
	}
	
	public static void pract03() {
		classX x1 = new classX();
		classX x2 = new classX();
		x1.setN(900);
//		x1.setS(500);
//		ClassX.setS(500);
		System.out.println(x2.n);
//		System.out.println(x2.s);
//		System.out.println(ClassX.s);
	}

	public static void pract04() {
		classX x1 = new classX();
		classX x2 = new classX();
		x1.setN(900);
		ClassS.setS(500);
		System.out.println(x2.n);
		System.out.println(ClassS.s);		
	}
	public static void pract05() {
		Dog dog =new Dog("doggy");
		System.out.println(dog.getDogName());
		Dog dog1 =new Dog();
		System.out.println(dog1.getDogName());
	}
}