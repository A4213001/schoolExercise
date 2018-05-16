public class MyMain {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int [][] A={{11,14},{12,15},{13,16}};
		int [][] B={{1,2,3},{4,5,6}},C={{10,13,16},{11,14,17},{12,15,18}};
		System.out.println("==========轉置矩陣==========");
		printArray(tMatrix(A));
		System.out.println("==========陣列相乘==========");
		printArray(multiplyMartix(B,C));
		System.out.println("==========自我相乘==========");
		printArray(selfMultiplyMatrix(B));
	}
	public static void printArray(int[][] arry) {
		for (int row=0;row<arry.length;row++) {
			for (int col=0;col<arry[row].length;col++) {
				System.out.print(arry[row][col]+"\t");
			}
			System.out.println();
		}		
	}
	public static int [][] tMatrix(int [][] arry){
		int[][] result;
		result= new int[arry[0].length][arry.length]; 
		for (int i=0;i < result.length;i++){ 
			for (int j=0;j < result[i].length;j++){ 
				result[i][j] = arry[j][i]; 
			} 
		} 
		return result;
	}
	public static int[][] multiplyMartix(int[][] arryA,int[][] arryB){
		int[][] result;
		result =new int[arryA.length][arryB[0].length]; //[2][3] 2*3 3*3 = 2*3
		for(int i=0;i<arryA.length;i++){
			for(int j=0;j<arryB[0].length;j++){
				for (int k=0;k<arryA[0].length ;k++){ 
					result[i][j]+=arryA[i][k]*arryB[k][j];
				} 
			}
		}
		return result;
	} 
	public static int [][] selfMultiplyMatrix(int [][] arry){
		int[][] result;
		result= new int[arry.length][arry.length];  //2*3 3*2=2*2
		result=multiplyMartix(arry,tMatrix(arry));
		return result;
	}
}
