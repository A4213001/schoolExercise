public class Dog {
    private static int heartBeat=90;    //類別變數
    private String dogName;  //物件變數

    //Constructor建構元，以下的dogName是區域變數
    public Dog() {
    	this("Lucky");
    }
    
    public Dog(String dogName) {
    	this.dogName=dogName;
    }
    
    public String getDogName() {
		return this.dogName;
	}

	public void setDogName(String dogName) {
		this.dogName = dogName;
	}

	//物件方法
    public void run(){
    	heartBeat=heartBeat+10;
    }
}