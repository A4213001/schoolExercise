import java.util.Scanner;

public class MyMain {

	static Scanner scn = new Scanner(System.in);
	public static void main(String[] args) {
		//		pract01();  //原始資料型態與非原始資料型態(類別型(class)資料型態)
		//		pract02();	//print() println() printf()的比較
		//		pract03();  //自動轉換(系統)與強制轉換(人工)
		//		pract04();
		//		pract05();
		pract06();
		scn.close();
	}

	public static void pract01() {
		final float pi=3.14F;
		int a=100;               //原始資料型態
		Integer b=200;           //非原始資料型態(類別型(class)資料型態，具有一些資訊以及功能
		System.out.println(a);
		System.out.println(b.MAX_VALUE);
		System.out.println(b.MIN_VALUE);
		System.out.println(Integer.MAX_VALUE);	
		System.out.println(b.toString()+a);        //b將自己轉換成String
		System.out.println(Integer.toString(b)+a); //Integer.toString(b)將b轉換成String
		System.out.println(Integer.MAX_VALUE);
		System.out.println(Integer.MAX_VALUE+1);
		System.out.println(Integer.MIN_VALUE);		
		System.out.println(Integer.MIN_VALUE-1);	
		System.out.println("Length of Double is "+Double.BYTES+" bytes");
		System.out.println("Length of Float is "+Float.BYTES+" bytes");
		System.out.println("Length of Integer is "+Integer.BYTES+" bytes");
		System.out.println("Length of Short is "+Short.BYTES+" bytes");
	}

	public static void pract02() {
		int num1=100;
		String msg="本書";
		System.out.print("abcdefg\n");
		System.out.print("ijklmn\topq\n");
		System.out.printf("我有%d%s%n", num1, msg);//format 格式
		System.out.printf("我有%d%s\n", num1, msg);//format 格式
		System.out.printf("Integer的最大值:%d%n", Integer.MAX_VALUE);
		System.out.println("C:\\eclipse\\jee-mars\\eclipse\\configuration");
		System.out.println("C:/eclipse/jee-mars/eclipse/configuration");		
	}

	public static void pract03() {
		System.out.println((int) (Math.random()*10));  //強制轉型態
		System.out.println((int) (Math.random()*10));  //強制轉型態
		System.out.println((int) (Math.random()*10));  //強制轉型態
		System.out.println("==========================");
		int rnd=(int) (Math.random()*10);
		System.out.println(rnd);
		System.out.println(rnd);
		System.out.println(rnd);
	}

	public static void pract04() {
		int num;
		System.out.print("請輸入一個數值:");
		num=scn.nextInt();
		System.out.printf("您輸入的數值是:%d%n", num);		
	}
	public static void pract05() {
		System.out.print("請輸入第一個字串");
		System.out.println(scn.nextLine());
		System.out.print("請輸入另一個字串");
		System.out.println(scn.next());
	}
	public static void pract06(){
		int count=1,num1,num2;
		System.out.printf("請輸入第%d個數值(num%d):",count,count);
		num1=scn.nextInt();
		System.out.printf("請輸入第%d個數值(num%d):",count+1,count+1);
		num2=scn.nextInt();
		System.out.printf("計算結果:\t%d+%d=%d",num1,num2,num1+num2);
	}
}