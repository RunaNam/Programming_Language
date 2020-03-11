class RepairableTest{
    public static void main (String [] args){
        Tank tank = new Tank();
        //Dropship dropship = new Dropship();
        Scv scv = new Scv();
//      Scv.repair(Dropship)
        scv.repair(tank);
    }
}

interface Repairable{}

class Unit {
    int hitPoint;
    final int MAX_HP;
    Unit (int hp){
        MAX_HP = hp;
    }
}

class GroundUnit extends Unit {
    GroundUnit(int hp){
        super(hp);
    }
}


class AirUnit extends Unit {
    AirUnit(int hp){
        super(hp);
    }
}

class Tank extends GroundUnit implements Repairable{
    Tank(){
        super(150);
        hitPoint = MAX_HP;
    }
    public String toString(){
        return "Tank";
    }
}

class Dropship extends AirUnit {
    Dropship(){
        super(150);
        hitPoint = MAX_HP;
    }
    public String toString(){
        return "Dropship";
    }
}

class Scv extends GroundUnit implements Repairable{
    Scv(){
        super(60);
        hitPoint =90;
    }
    void repair(Repairable r){
        if (r instanceof Unit){
            Unit u = (Unit)r;
            while (u.hitPoint!= u.MAX_HP){
                u.hitPoint++;
            }
            System.out.println(u.toString() + "repair finish");
        }
    }
}

