import java.util.Scanner;

public class MyMain {
	static Scanner scn = new Scanner(System.in);
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//		pract01();
		//		System.out.println(getRandom(10,98));
		//		guessNum(getRandom(0,100));
		//		game(getRandom(1,3),3);
		//		pract04();
		System.out.println(getRandom2(4));
	}

	public static void pract01(){
		int a=123;
		System.out.println(Integer.toString(a).length());
		System.out.println(Math.random()*Math.pow(10, 3));
	}

	public static void guessNum(int ans){
		int t;
		System.out.println("�п�J�@�Ӽ�:");
		t=scn.nextInt();
		while(t!=ans){
			if(Math.abs(t-ans)<=5){
				System.out.println("�ܱ���F");
			}
			else if(t<ans){
				System.out.println("�Ӥp");
			}
			else if(t>ans){
				System.out.println("�Ӥj");
			}
			System.out.println("�п�J�@�Ӽ�:");
			t=scn.nextInt();
		}
		System.out.println("����F!");
	}

	public static int getRandom(int min,int max){
		int rnd=-1, pow=Integer.toString(max).length();
		while(rnd<min || rnd>max) {
			rnd=(int) (Math.random()*Math.pow(10, pow));
		} 
		return rnd;
	}

	public static void game(int rnd,int max){
		int t;
		System.out.println("�п��(1)�ŤM (2)���Y (3)��");
		t=scn.nextInt();
		System.out.print("���X");
		switch(rnd){
		case 1:System.out.println("(1)�ŤM");
		break;
		case 2:System.out.println("(2)���Y ");
		break;
		case 3:System.out.println("(3)��");
		break;
		}
		if(t-rnd==1||t-rnd==-1*(max-1)){
			System.out.println("�AĹ�F");
		}
		else if(t==rnd || Math.abs(t-rnd)<(3-1) && t-rnd!=1){
			System.out.println("����");
		}
		else{
			System.out.println("�A��F");
		}
	}

	public static void pract04() {
		String str="abcdeabcdefgh";
		System.out.println(str.endsWith("fgh"));
		System.out.println(str.startsWith("abcd"));
		System.out.println(str.indexOf("abc"));
		System.out.println(str.indexOf("abc",1));
		System.out.println(str.indexOf("abcc"));
		System.out.println(str.substring(0, 5));
	}

	public static String getRandom2(int digits) {
		String num="";
		for (int i=1;i<=digits;i++) {
			num=num+(int)(Math.random()*10);
		}
		return num;
	}

	public static String getRandom2(int digits, boolean isDup) {
		String num="";
		int rnd;
		for (int i=1;i<=digits;i++) {
			rnd=(int)(Math.random()*10);
			if (isDup)
				num=num+rnd;
			else {
				if (num.indexOf(rnd)<0 || num.isEmpty() && rnd!=0) 
					num=num+rnd;
				else 
					i--;
			}
		}
		return num;
	}
}
