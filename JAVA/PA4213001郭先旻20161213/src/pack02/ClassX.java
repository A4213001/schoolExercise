package pack02;

public class ClassX {
   public int xPublic=100;
   protected int xProtected=100;   
   int xPackage=100;
   private int xPrivate=100; 
   
   public ClassX(int xPrivate){
	   this.xPrivate=xPrivate;
   }
   
   public void printX() {
	   System.out.printf("xPublic=%d%n", xPublic);
	   System.out.printf("xProtected=%d%n", xProtected);
	   System.out.printf("xPackage=%d%n", xPackage);
	   System.out.printf("xPrivate=%d%n", xPrivate);
   }
   
}