
public class MyMain {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.printf("(1.a)�b�| = 3����A�P�� = %.6f\n",circleCircumference(3));
		System.out.printf("(1.b)�b�| = 3.500000����A�P�� = %.6f\n",circleCircumference((float)3.500000));
		System.out.printf("(1.c)�b�| = 3����A���n = %.6f\n",circleArea(3));
		System.out.printf("(1.d)�b�| = 3.500000����A���n =%.6f\n\n", circleArea((float)3.500000));
		bytesOfDateType();
	}
	public static float circleCircumference(float radius){
		return (float)(2*radius*Math.PI);
	}
	
	public static float circleArea(float radius){
		return (float)(radius*radius*Math.PI);
	}
	
	public static void bytesOfDateType(){
		System.out.printf("Size of Double is %d bytes=%d bits\n",Double.BYTES,Double.SIZE);
		System.out.printf("Size of Float is %d bytes=%d bits\n",Float.BYTES,Float.SIZE);
		System.out.printf("Size of Integer is %d bytes=%d bits\n",Integer.BYTES,Integer.SIZE);
		System.out.printf("Size of Short is %d bytes=%d bits\n",Short.BYTES,Short.SIZE);
		System.out.printf("Size of Character is %d bytes=%d bits\n",Character.BYTES,Character.SIZE);
		System.out.printf("Size of Byte is %d bytes=%d bits\n",Byte.BYTES,Byte.SIZE);
	}
}

