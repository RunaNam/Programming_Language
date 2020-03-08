class Car{
    String color;
    String gearType;
    int door;
    Car(){}
    Car(String color, String gearType, int door){
        this.color = color;
        this.gearType = gearType;
        this.door = door;
    }
}

class CarTest{
    public static void main (String[] args){
        Car c1 = new Car("white", "auto",4);
        System.out.println("color: "+c1.color+" geartype : "+c1.gearType+" door: "+c1.door);
    }
}