//not (P and Q) = (not P)  or (not Q)
//not (P  or Q) = (not P) and (not Q)
//
//AND 形同 * (乘法)
//OR  形同 + (加法)
//3  *  5  + 3  *  7 = 3   * ( 5  + 7 )  
//A and B or A and C = A and ( B or C )
//
//四則運算，先乘除後加減   
//
//A and B and C or D and E or F or G and H and I or J and K
//
//   A and B and C 
//or D and E 
//or F 
//or G and H and I 
//or J and K

public class MyMain {


	public static void main(String[] args) {
		//		pract01();
		//		pract02(3,6);
		//pract03(6);
		//		pract04();
		pract05(4);
	}

	public static void pract01() {
		int a=100, b=200;
		int x=5, y=10, z=20;
		int r=x++ - --y + ++z;     // 5 - 9 + 21
		System.out.println(a++);
		System.out.println(a);
		System.out.println(b--);
		System.out.println(b);		
		System.out.printf("r=%d%n",r);
		System.out.println(2 & 3);       // bitwise，先將數值轉成2進位進行 & 運算
		System.out.println(2 | 3);       // bitwise，先將數值轉成2進位進行 | 運算		
	}

	public static void pract02(int base, int nElement) {
		int cnter=0;
		for(int i=1;i<=100;i++) {
			if (i%base==0) {
				System.out.printf("%d%s",i,(++cnter%nElement==0?"\n":"\t"));
			}
		}
	}

	public static void pract03(int n) {
		int cnter=0;
		for(int i=1;i<=100;i++) {
			if ((i%2==0 || i%7==0) && i%(2*7)!=0) {
				System.out.printf("%d%s",i,(++cnter%n==0?"\n":"\t"));
			}
		}
	}
	public static void pract04(){
		for(int i=1;i<=9;i++){
			for(int j=1;j<=9;j++){
				System.out.printf("%d*%d=%d\n",i,j,i*j);
			}
			System.out.println();
		}
	}
	public static void pract05(int n){
		for (int i=1;i<=9;i=i+n) {
			for (int j=1;j<=9;j++) {
				for (int k=0;k<n && (i+k)<=9;k++) {
					System.out.printf("%d*%d=%d\t",(i+k),j,(i+k)*j);
				}
				System.out.println();
			}
			System.out.println();
		}
	}
}


