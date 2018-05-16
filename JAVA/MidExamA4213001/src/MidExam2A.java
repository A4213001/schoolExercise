
public class MidExam2A {
	/* 科系:資工2A
	 * 學號:A4213001
	 * 姓名:郭先旻
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] A={1,2,3,4,5},B={5,4,3},C={2,4,6,8};
		System.out.printf("mid01(%d)=%d%n",-1,mid01(-1));
		System.out.printf("mid01(%d)=%d%n",0,mid01(0));
		System.out.printf("mid01(%d)=%d%n",1,mid01(1));
		System.out.printf("mid01(%d)=%d%n",3,mid01(3));
		System.out.printf("mid01(%d)=%d%n",5,mid01(5));
		printArray(mid02(A,B));
		printArray(mid02(A,B,C));
	}
	public static int mid01(int n){
		if(n<2)
			return 1;
		else
			return (n*(n-1)-(n-1)*(n-2))*mid01(n-1);
	}

	public static int[] mid02(int[] arryA, int[] arryB){
		int[] result;
		result=new int[Math.max(arryA.length,arryB.length)];
		for (int i=0;i<Math.max(arryA.length,arryB.length);i++) {
			result[i]=(i < arryA.length?arryA[i]:arryA[i-arryA.length])*
					(i < arryB.length?arryB[i]:arryB[i-arryB.length]);			
		}
		return result;
	}
	public static int[] mid02(int[] arryA, int[] arryB, int[] arryC){
		return mid02(mid02(arryA,arryB),arryC);
	}
	public static void printArray(int[] arry){
		System.out.print("{");
		for (int i=0;i<arry.length;i++) {
			System.out.print(arry[i]);
			if(i!=arry.length-1)
				System.out.print(",");
		}
		System.out.print("}");
		System.out.println();
	}
}
