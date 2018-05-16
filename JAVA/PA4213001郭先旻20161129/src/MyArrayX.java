
public class MyArrayX {
	public void bubbleSort(int[] arry, boolean isAsc) {
		int temp;
		for(int j=0;j<arry.length-1;j++) {        //回合數(round)
			for(int i=0;i<arry.length-1-j;i++) {  //該回合執行的次數
				if (isAsc && arry[i] > arry[i+1] || !isAsc && arry[i] < arry[i+1]) {
					temp=arry[i];
					arry[i]=arry[i+1];
					arry[i+1]=temp;
				}
			}
		}
	}
	
	public void printArray(int[] arry){
		for (int i=0;i<arry.length;i++) {
			System.out.print(arry[i]+"\t");
		}
		System.out.println();
	}

	public int extremeValueOfArray(int[] arry, boolean isMax) {
		int extremeValue=arry[0];
		for (int i=0;i<arry.length;i++) {
			extremeValue= isMax?
					      Math.max(extremeValue, arry[i]):
				          Math.min(extremeValue, arry[i]);
		}
		return extremeValue;
	}	
}