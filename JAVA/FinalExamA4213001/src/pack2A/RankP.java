package pack2A;

import java.util.Arrays;

public abstract class RankP {
	protected int[] arry;
	
	public RankP(int[] arry) {
		this.arry=arry;
	}
	
	int[] getArry() {
		return arry;
	}

	int[] bubbleSort(boolean isAsc) {
		int temp;
		int[] arry = Arrays.copyOf(this.arry,this.arry.length); 
		for (int j=0;j<arry.length-1;j++) {             //此處控制回合數
			for (int i =0;i <arry.length-1-j;i++) {     //此處控制該回合要的次數
				if (isAsc && arry[i] > arry[i+1] || !isAsc && arry[i] < arry[i+1]) {
					temp=arry[i];
					arry[i]=arry[i+1];
					arry[i+1]=temp;
				}
			}
		}
		return arry;
	}

	public abstract int[] getRank();
	
	public void print() {
		for (int i=0;i<this.arry.length;i++) {
			System.out.print(this.arry[i]+"\t");
		}
		System.out.println();
	}
	
	public void print(int[] arry) {
		for (int i=0;i<arry.length;i++) {
			System.out.print(arry[i]+"\t");
		}
		System.out.println();
	}
	
}
