import java.util.Arrays;
import java.util.Scanner;

public class MyMain {
	static Scanner scn = new Scanner(System.in);
	public static void main(String[] args) {
//		pract01();
//		pract02();
//		pract03();
		pract04();

	}

	public static void pract01() {
		guessNum(getRandom(4,false));
	}
	
	public static void pract02() {
		System.out.printf("f1(%d)=%d%n",5, f1(5));
		System.out.printf("f2(%d)=%d%n",4, f2(4));
		System.out.printf("f3(%d)=%d%n",5, f3(5));
	}
	
	public static void pract03(){
		int [] arry1={1,5,8,4,90};
		int arry2[];
//		arry2={90,78,26,10};
		arry2 = new int [5];
		for(int i=0;i<arry1.length;i++){
			System.out.println(arry1[i]);
		}
	}
	
	public static void pract04() {
		int v1=100,v2;
		int[] a1={21,25,11,16,18},a2,a3;
		v2=v1;
		a2=a1;
		v2=300;           //v1仍然是100
		a2[0]=300;        //a1[0]已經被更改成300，因為a1與a2共用同一塊資料
		System.out.printf("v1=%d%n",v1);
		System.out.printf("v2=%d%n",v2);
		System.out.printf("a1[%d]=%d%n",0,a1[0]);
		System.out.printf("a2[%d]=%d%n",0,a2[0]);
		System.out.println("============================");
		callByValue(v1);      //v1只是將值copy一份過去給v3，所以v1不會被更改
		System.out.printf("v1=%d%n",v1);	
		callByReference(a1);  //a1將所儲存的值(資料的位址)copy一份過去給a4，a1與a4共用同一塊資料
		System.out.printf("a1[%d]=%d%n",0,a1[0]);
		Arrays.sort(a1);      //a1的資料會被排序
		System.out.printf("a1[%d]=%d%n",0,a1[0]);	
	}
	
	public static void callByValue(int v3) {
		v3=900;
	}
	
	public static void callByReference(int[] a4) {
		a4[0]=900;
	}
	
	public static int f1(int n) {
		if (n<=1) 
			return 1;
		else
			return n*f1(n-1);
	}
	
	public static int f2(int n) {
		if (n<=3) 
			return n*(n-1);
		else
			return n*(n-1)+f2(n-2);
	}
	
	public static int f3(int n) {
		if(n==1)
			return 0;
		else if (n==2) 
			return 1; 
		else
			return f3(n-1)+f3(n-2);
	}
	
	public static String getRandom(int digits, boolean isDup) {
		String num="";
		int rnd;
		for (int i=1;i<=digits;i++) {
			rnd=(int)(Math.random()*10);
			if (isDup)
				num=num+rnd;
			else {
				if (!num.isEmpty() && num.indexOf(Integer.toString(rnd))<0 || num.isEmpty() && rnd!=0) 
					num=num+rnd;
				else 
					i--;
			}
		}
		return num;
	}
	
	public static void guessNum(String rnd) {
		String usrStr="";
		int A=0, B=0;
		System.out.print(rnd);
		while (!rnd.equals(usrStr)) {
			System.out.printf("請輸入%d位數字:",rnd.length());
			usrStr=scn.next();
			for (int i=0;i<rnd.length();i++) {
				if(rnd.substring(i, i+1).equals(usrStr.substring(i,i+1)))
					A++;
				else if (rnd.indexOf(usrStr.substring(i,i+1))>=0)
					B++;
			}
			if(A!=4)
			System.out.printf("%dA%dB",A,B);
			A=0;
			B=0;
		}
		System.out.print("答對了");
	}
}