package pack2A;

public class Rank extends pack2A.RankP {

    public Rank(int[] arry){
    	super(arry);
    }

    public int[] getRank(){
    	int[] a = new int[arry.length];
    	int[] ary=bubbleSort(true);
    	for(int i=0;i<arry.length;i++){
    		for(int j=0;j<ary.length;j++){
    			if(arry[i]==ary[j]){
    				a[i]=j;
    			}
    		}    		
    	}
    	return a;
    }
}
