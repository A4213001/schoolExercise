package pack03;

public class ClassXB extends pack02.ClassX{
	
	public ClassXB(int x) {
		super(x);  //�ϥ�super()�ɡA�����b�Ĥ@��
		//.x..x.  ��L���{��
	}
	
	public void printX() {
		System.out.printf("xPublic=%d%n", xPublic);
		System.out.printf("xProtected=%d%n", xProtected);
//		System.out.printf("xPackage=%d%n", xPackage);     //���B����ϥ�
//		System.out.printf("xPrivate=%d%n", xPrivate);     //���B����ϥ�
	}
}