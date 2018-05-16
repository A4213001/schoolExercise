import pack01.*;
import pack02.*;

public class MyMain {

	public static void main(String[] args) {
		MyMain myMain = new MyMain();
//		myMain.pract01();
//		myMain.pract02();
		myMain.pract03();
	}
	
	public void pract01() {
		int[] A = {100,600,150,300,50};
	    int[] B = {120, 150, 950, 50};
	    int[] C = {55,66,99,11,30,80,150,60};
	    XArray xArrayA = new XArray(A);
	    XArray xArrayB = new XArray(B);
	    XArray xArrayC = new XArray(C);
	    System.out.println(xArrayA.getMaxValue());
	    System.out.println(xArrayA.getMinValue());
	    xArrayB.printArray(xArrayB.getAscArray());
	    xArrayB.printArray(xArrayB.getDescArray());
	    xArrayC.printArray(xArrayC.getOrigArray());
	    xArrayA.setOrigArray(B);
	    System.out.println(xArrayA.getMaxValue());
	    System.out.println(xArrayA.getMinValue());
	}

	public void pract02() {
		ClassA classA = new ClassA();
		ClassB classB = new ClassB();
		ClassC classC = new ClassC();
		classC.op1(); //from op1 of ClassC
		classC.op2(); //from op2 of ClassC
		classA.op1(); //from op1 of ClassC
		classA.op2(); //from op2 of ClassC
		classA.op3(); //from op3 of ClassA
		classB.op1(); //from op1 of ClassB, overriding (overwriting)
		classB.op2(); //from op2 of ClassC
		classB.op4(); //from op4 of ClassB
	}
	
	public void pract03() {
		ClassX classX = new ClassX();
		ClassY classY = new ClassY();
//		ClassZ classZ = new ClassZ(); //抽象類別(abstract class)不可以直接使用
		classX.op1();
		classX.op2();
		classX.op3();
		classX.op5();
		classY.op1();
		classY.op2();
		classY.op4();
		classY.op5();
		
	}
	
}
