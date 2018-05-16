package pack01;

public class Car implements pack01.ISpeedSystem, pack01.IEngine {

    public boolean starter(boolean isStart){
        return false;
    }

    public int speedUp(){
        return 0;
    }

    public int slowDown(){
        return 0;
    }

    public int brake(){
        return 0;
    }

    public void engine(boolean isSpeedUp){
    }

}
