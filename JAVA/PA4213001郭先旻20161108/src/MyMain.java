public class MyMain {

	public static void main(String[] args) {
//		pract01();  //ぃ单皚
		pract02();  //т皚い程程
	}
	
	public static void pract01() {
		int[] A={100,500,300,200,60}, 
			  B={30,80,100,55,300,80},
			  C={130,380,100,355,300,80,100},
			  D={30,80,180,55,30,810};
		printArray(sumArray(A, B));
		printArray(sumArray(A, B, C));
		printArray(sumArray(A, B, C, D));		
	}
	
	public static void pract02() {
		int[] A={100,500,300,200,60};
		int[] B={30,150,305,122,160};
		int[] C={40,35,130,20,150,100};
		System.out.printf("皚い程:%d%n",maxOfArray(A));
		System.out.printf("皚い程:%d%n",minOfArray(A));
		System.out.printf("皚い程:%d%n",extremeValueOfArray(A,true));
		System.out.printf("皚い程:%d%n",extremeValueOfArray(A,false));
		System.out.printf("皚竤い程:%d%n",extremeValueOfArray(A,B,true));
		System.out.printf("皚竤い程:%d%n",extremeValueOfArray(A,B,C,false));
	}
	
	public static int maxOfArray(int[] arry) {
		int max=arry[0];
		for (int i=0;i<arry.length;i++) {
			max=Math.max(max, arry[i]);
		}
		return max;
	}
	
	public static int minOfArray(int[] arry) {
		int min=arry[0];
		for (int i=0;i<arry.length;i++) {
			min=Math.min(min, arry[i]);
		}
		return min;
	}
	
	public static int extremeValueOfArray(int[] arry, boolean isMax) {
		int extremeValue=arry[0];
		for (int i=0;i<arry.length;i++) {
			extremeValue= isMax?
					      Math.max(extremeValue, arry[i]):
				          Math.min(extremeValue, arry[i]);
		}
		return extremeValue;
	}
	
	public static int extremeValueOfArray(int[] arryA, int[] arryB, boolean isMax) {
		return isMax?
			   Math.max(extremeValueOfArray(arryA, isMax), extremeValueOfArray(arryB, isMax)):
			   Math.min(extremeValueOfArray(arryA, isMax), extremeValueOfArray(arryB, isMax));
	}
	
	public static int extremeValueOfArray(int[] arryA, int[] arryB, int[] arryC, boolean isMax) {
		return isMax?
			   Math.max(extremeValueOfArray(arryA, arryB, isMax), extremeValueOfArray(arryC, isMax)):
			   Math.min(extremeValueOfArray(arryA, arryB, isMax), extremeValueOfArray(arryC, isMax));
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
}