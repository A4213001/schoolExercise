import java.util.Scanner;

public class MyMain {

	static Scanner scn = new Scanner(System.in);
	public static void main(String[] args) {
		//		pract01();  //��l��ƫ��A�P�D��l��ƫ��A(���O��(class)��ƫ��A)
		//		pract02();	//print() println() printf()�����
		//		pract03();  //�۰��ഫ(�t��)�P�j���ഫ(�H�u)
		//		pract04();
		//		pract05();
		pract06();
		scn.close();
	}

	public static void pract01() {
		final float pi=3.14F;
		int a=100;               //��l��ƫ��A
		Integer b=200;           //�D��l��ƫ��A(���O��(class)��ƫ��A�A�㦳�@�Ǹ�T�H�Υ\��
		System.out.println(a);
		System.out.println(b.MAX_VALUE);
		System.out.println(b.MIN_VALUE);
		System.out.println(Integer.MAX_VALUE);	
		System.out.println(b.toString()+a);        //b�N�ۤv�ഫ��String
		System.out.println(Integer.toString(b)+a); //Integer.toString(b)�Nb�ഫ��String
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
		String msg="����";
		System.out.print("abcdefg\n");
		System.out.print("ijklmn\topq\n");
		System.out.printf("�ڦ�%d%s%n", num1, msg);//format �榡
		System.out.printf("�ڦ�%d%s\n", num1, msg);//format �榡
		System.out.printf("Integer���̤j��:%d%n", Integer.MAX_VALUE);
		System.out.println("C:\\eclipse\\jee-mars\\eclipse\\configuration");
		System.out.println("C:/eclipse/jee-mars/eclipse/configuration");		
	}

	public static void pract03() {
		System.out.println((int) (Math.random()*10));  //�j���૬�A
		System.out.println((int) (Math.random()*10));  //�j���૬�A
		System.out.println((int) (Math.random()*10));  //�j���૬�A
		System.out.println("==========================");
		int rnd=(int) (Math.random()*10);
		System.out.println(rnd);
		System.out.println(rnd);
		System.out.println(rnd);
	}

	public static void pract04() {
		int num;
		System.out.print("�п�J�@�Ӽƭ�:");
		num=scn.nextInt();
		System.out.printf("�z��J���ƭȬO:%d%n", num);		
	}
	public static void pract05() {
		System.out.print("�п�J�Ĥ@�Ӧr��");
		System.out.println(scn.nextLine());
		System.out.print("�п�J�t�@�Ӧr��");
		System.out.println(scn.next());
	}
	public static void pract06(){
		int count=1,num1,num2;
		System.out.printf("�п�J��%d�Ӽƭ�(num%d):",count,count);
		num1=scn.nextInt();
		System.out.printf("�п�J��%d�Ӽƭ�(num%d):",count+1,count+1);
		num2=scn.nextInt();
		System.out.printf("�p�⵲�G:\t%d+%d=%d",num1,num2,num1+num2);
	}
}