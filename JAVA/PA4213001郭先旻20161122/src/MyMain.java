public class MyMain {

	public static void main(String[] args) {
		//		pract01();
		//		pract02();
		pract03();
	}

	public static void pract01() {
		int[] A={1,2,3,4,5};
		int[][] B={{1,2,3,4},
				{4,5,6,7},
				{8,9,10,11,12}};
		int[][] C={{3,5,6,7,8},
				{1,2,7,9,10},
				{3,5},
				{100}};
		System.out.println(B.length);    //计
		System.out.println(B[0].length); //材0︽计
		System.out.println(B[1].length); //材1︽计
		System.out.println(B[2].length); //材2︽计
		printArray(B);
	}

	public static void pract02() {
		int[][] A={{1,2,3,4},
				{4,5,6,7},
				{8,9,10,11,12}};
		int[][] B={{3,5,6,7,8},
				{1,2,7,9,10},
				{3,5},
				{100}};
		for (int i=0;i<Math.max(A.length,B.length);i++) {
			printArray(sumArray(i < A.length ? A[i] : new int[0],
					i < B.length ? B[i] : new int[0]));
		}
	}
	public static void pract03(){
		int []A={20,50,40,25,90,14,34,79};
		bubbleSort(A,true);
		printArray(A);
		bubbleSort(A,false);
		printArray(A);
	}

	public static void bubbleSort(int[] arry, boolean isAsc) {
		int temp;
		for(int j=0;j<arry.length-1;j++) {        //计(round)
			for(int i=0;i<arry.length-1-j;i++) {  //赣磅︽Ω计
				if (isAsc && arry[i] > arry[i+1] || !isAsc && arry[i] < arry[i+1]) {
					temp=arry[i];
					arry[i]=arry[i+1];
					arry[i+1]=temp;
				}
			}
		}
	}

	public static int[] sumArray(int[] arryA, int[] arryB) {
		int[] result;
		result=new int[Math.max(arryA.length,arryB.length)];
		for (int i=0;i<Math.max(arryA.length,arryB.length);i++) {
			result[i]=(i < arryA.length?arryA[i]:0)+
					(i < arryB.length?arryB[i]:0);			
		}
		return result;
	}

	public static int[] sumArray(int[] arryA, int[] arryB, int[] arryC) {
		return sumArray(sumArray(arryA, arryB),arryC);
	}

	public static int[] sumArray(int[] arryA, int[] arryB, int[] arryC, int[] arryD) {
		return sumArray(sumArray(arryA, arryB),sumArray(arryC,arryD));
	}

	public static void printArray(int[] arry){
		for (int i=0;i<arry.length;i++) {
			System.out.print(arry[i]+"\t");
		}
		System.out.println();
	}

	public static void printArray(int[][] arry) {
		for (int row=0;row<arry.length;row++) {
			for (int col=0;col<arry[row].length;col++) {
				System.out.print(arry[row][col]+"\t");
			}
			System.out.println();
		}		
	}
}