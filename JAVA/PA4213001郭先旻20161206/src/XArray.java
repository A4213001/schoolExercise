import java.util.Arrays;

public class XArray {
	
	private int[] origArray,ascArray,descArray;
	private int maxValue, minValue;

	public XArray(int[] arry) {
		init(arry);
	}	
	
	private void init(int[] arry) {
		this.origArray=arry;
		ascArray=Arrays.copyOf(arry, arry.length);
		descArray=Arrays.copyOf(arry, arry.length);
		bubbleSort(ascArray,true);
		bubbleSort(descArray,false);
		maxValue=extremeValueOfArray(arry,true);
		minValue=extremeValueOfArray(arry,false);		
	}
	
	public int[] getOrigArray() {
		return origArray;
	}
	
	public void setOrigArray(int[] arry) {
		init(arry);
	}

	public int[] getAscArray() {
		return ascArray;
	}

	public int[] getDescArray() {
		return descArray;
	}

	public int getMaxValue() {
		return maxValue;
	}

	public int getMinValue() {
		return minValue;
	}

	private void bubbleSort(int[] arry, boolean isAsc) {
		int temp;
		for (int j=0;j<arry.length-1;j++) {             //矪北计
			for (int i =0;i <arry.length-1-j;i++) {     //矪北赣璶Ω计
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
	
	private int extremeValueOfArray (int[] arry, boolean isMax){
		int extremeValue=arry[0];
		for (int i=0;i<arry.length;i++) {
			extremeValue=(isMax ? Math.max(extremeValue, arry[i]): Math.min(extremeValue, arry[i]));
		}
		return extremeValue;		
	}	
	
}