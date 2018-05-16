package pack02;

public class ClassY {
	ClassX classX = new ClassX(50);

	public void printX() {
		System.out.printf("xPublic=%d%n", classX.xPublic);
		System.out.printf("xProtected=%d%n", classX.xProtected);
		System.out.printf("xPackage=%d%n", classX.xPackage);
//		System.out.printf("xPrivate=%d%n", classX.xPrivate);     //此處不能使用
	}

}