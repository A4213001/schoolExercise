package pack03;

import pack02.ClassX;

public class ClassZ {
	ClassX classX = new ClassX(80);

	public void printX() {
		System.out.printf("xPublic=%d%n", classX.xPublic);
//		System.out.printf("xProtected=%d%n", classX.xProtected); //���B����ϥ�
//		System.out.printf("xPackage=%d%n", classX.xPackage);     //���B����ϥ�
//		System.out.printf("xPrivate=%d%n", classX.xPrivate);     //���B����ϥ�
	}
}