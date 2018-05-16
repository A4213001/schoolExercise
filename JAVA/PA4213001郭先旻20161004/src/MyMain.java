
public class MyMain {
	static int num1=30,num2=200;
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//		單行註記，Ctrl+/
		/*
		 *多行註記，自動縮排快速鍵:Ctrl+i
		 */


		//		pract01();
		//		pract02();
		pract03();
	}

	public static void pract01(){
		int a,b=30;
		a=10;
		a=a+1;
		System.out.println(3+5);
		System.out.println(a+b);
		System.out.println("Hello"+"Java");
	}

	public static void pract02(){
		//		int num1=30,num2=200;
		System.out.println(num1+num2);
		System.out.println("num1+num2="+num1+num2);
		System.out.println("num1+num2="+(num1+num2));
	}

	public static void pract03() {
		int x=100, y=200, z=500;
		String msg1="Hello ", msg2="Java";
		System.out.println(x+y);
		System.out.println(msg1+msg2);
		System.out.println("result="+add(x, y));
		System.out.println("result="+add(x, y, z));
		System.out.println("result="+add(msg1, msg2));		
	}
	//多載:方法名稱相同，參數個數不同或是參數故數相同但資料型態不完全相同
	public static int add(int a, int b) {
		return (a+b);
	}

	public static int add(int a, int b, int c) {
		return (a+b+c);
	}

	public static String add(String a, String b) {
		return (a+b);
	}
}
