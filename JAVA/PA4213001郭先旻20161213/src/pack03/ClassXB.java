package pack03;

public class ClassXB extends pack02.ClassX{
	
	public ClassXB(int x) {
		super(x);  //使用super()時，必須在第一行
		//.x..x.  其他的程式
	}
	
	public void printX() {
		System.out.printf("xPublic=%d%n", xPublic);
		System.out.printf("xProtected=%d%n", xProtected);
//		System.out.printf("xPackage=%d%n", xPackage);     //此處不能使用
//		System.out.printf("xPrivate=%d%n", xPrivate);     //此處不能使用
	}
}