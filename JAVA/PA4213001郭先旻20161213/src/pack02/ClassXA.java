package pack02;

public class ClassXA extends ClassX {

	public ClassXA(int x) {
		super(x);
	}
	
	public void printX() {
		System.out.printf("xPublic=%d%n", xPublic);
		System.out.printf("xProtected=%d%n", xProtected);
		System.out.printf("xPackage=%d%n", xPackage);
//		System.out.printf("xPrivate=%d%n", xPrivate);     //此處不能使用
	}
	
}