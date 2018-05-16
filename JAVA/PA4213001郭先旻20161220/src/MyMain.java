import java.io.BufferedReader;
import java.io.FileReader;

public class MyMain {

	public static void main(String[] args) {
//		pract01();
//		pract02();
//		pract03();
//		pract04();
		pract05();

	}
	
	public static void pract01() {
		int[] A={1,2,3,4,5};
		try {
			System.out.println(10/10);
			System.out.println(A[5]);
		}
		catch(ArithmeticException e) {
			System.out.println("分母不可為0");
			System.out.println(e.getMessage());
		}
		catch(ArrayIndexOutOfBoundsException e) {
			System.out.println("陣列的index超過");
			System.out.println(e.getMessage());
		}
		catch(Exception e) {
			System.out.println("發生例外");
			System.out.println(e.getMessage());
		}		
	}

	public static void pract02(){
		int[] A={100,29,50,22,60};
		MyArray myArray=new MyArray(A);
//		System.out.println(myArray.getArray1(6));
		
//		try {
//			System.out.println(myArray.getArray2(6));
//		}
//		catch(ArrayIndexOutOfBoundsException e) {
//			System.out.println("exception from getArray2()");			
//			System.out.println(e.getMessage());
//		}
		
		try {
			System.out.println(myArray.getArray3(6));
		} catch (MyException e) {
			System.out.println(e.getMessage());
		}
		
	}
	public static void pract03() {
		char[] buff = new char[128];
		try {
			FileReader fr = new FileReader("H:\\news20161220.txt");
			int num=fr.read(buff);
			while(num>=0) {
				System.out.print(new String(buff,0,num));
				num=fr.read(buff);
			}
			fr.close();
		} catch (Exception e) {
			System.out.println(e.getMessage());
		}
	}
	

//	public static void pract03() {
//		char[] buff = new char[128];
//		try {
//			FileReader fr = new FileReader("H:\\news20161220.txt");
//			int num;
//			while((num=fr.read(buff))>=0) {
//				System.out.print(new String(buff,0,num));
//			}
//			fr.close();
//		} catch (Exception e) {
//			System.out.println(e.getMessage());
//		}
//	}
	
	public static void pract04() {
		try {
			FileReader fr = new FileReader("H:\\news20161220.txt");
			BufferedReader bfr = new BufferedReader(fr);
            String str=bfr.readLine();
			while(str!=null) {
				System.out.println(str);
				str=bfr.readLine();
			}			
			fr.close();
		} catch (Exception e) {
			System.out.println(e.getMessage());
		}		
	}
	
//	public static void pract04() {
//		try {
//			FileReader fr = new FileReader("H:\\news20161220.txt");
//			BufferedReader bfr = new BufferedReader(fr);
//            String str;
//			while((str=bfr.readLine())!=null) {
//				System.out.println(str);
//			}			
//			fr.close();
//		} catch (Exception e) {
//			System.out.println(e.getMessage());
//		}		
//	}	
	
	public static void pract05() {
		String str="abcdefgabcdefg";
		System.out.println(str.substring(1,5));
		if (str.substring(0, 2).equals("ab")) 
			System.out.println("相同");
		else
			System.out.println("不相同");
		System.out.println(str.length());
		System.out.println(str.indexOf("abc"));
		System.out.println(str.indexOf("abc",2));	
	}
}