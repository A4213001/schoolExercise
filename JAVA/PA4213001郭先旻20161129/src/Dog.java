public class Dog {
    private static int heartBeat=90;    //���O�ܼ�
    private String dogName;  //�����ܼ�

    //Constructor�غc���A�H�U��dogName�O�ϰ��ܼ�
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

	//�����k
    public void run(){
    	heartBeat=heartBeat+10;
    }
}