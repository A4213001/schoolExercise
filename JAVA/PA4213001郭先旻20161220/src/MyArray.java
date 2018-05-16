
public class MyArray {
	
	private int[] arry;
	
	public MyArray (int[] arry) {
		this.arry=arry;
	}
	
	public int getArray1(int index) {
		try {
			if (index >= this.arry.length) 
				throw new ArrayIndexOutOfBoundsException();
			return arry[index];
		}
		catch(ArrayIndexOutOfBoundsException e) {
			System.out.println(e.getMessage());
			return -1;
		}
	}
	
	public int getArray2(int index) throws ArrayIndexOutOfBoundsException{
		if (index >= this.arry.length) 
			throw new ArrayIndexOutOfBoundsException();
		return arry[index];
	}
	
	
	public int getArray3(int index) throws MyException{
		if (index >= this.arry.length || index <=0) 
			throw new MyException("index���i�H�W�L"+arry.length+"�άO��0");
		return arry[index];
	}	
	
}