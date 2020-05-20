
abstract class MyEnum<T extends MyEnum<T>> implements Comparable<T>{
    static int id = 0;
    int ordinal;
    String name = "";

    public int ordinal() {return ordinal;}
    MyEnum(String name){
        this.name = name;
        ordinal = id++;
    }

    public int compareTo(T t){
        return ordinal - t.ordinal;
    }
}

abstract class MyTransportation extends MyEnum{
    static final MyTransportation BUS = new MyTransportation("BUS", 100){
        int fare (int distance) {return distance * BASIC_FARE;}
    };    
    static final MyTransportation TRAIN = new MyTransportation("TRAIN", 150){
        int fare (int distance) {return distance * BASIC_FARE;}
    };    
    static final MyTransportation AIRPLANE = new MyTransportation("AIRPLANE", 300){
        int fare (int distance) {return distance * BASIC_FARE;}
    }; 
    
    abstract int fare(int distance);
    protected final int BASIC_FARE;

    private MyTransportation(String name, int basic_Fare){
        super(name);
        BASIC_FARE = basic_Fare;
    }
    public String name()        {return name;}
    public String toString()    {return name;}
}

class Enum2{
    public static void main (String[]args){
        MyTransportation t1 = MyTransportation.BUS;
        MyTransportation t2 = MyTransportation.TRAIN;
        MyTransportation t3 = MyTransportation.BUS;
        MyTransportation t4 = MyTransportation.BUS;
        MyTransportation t5 = MyTransportation.AIRPLANE;

        System.out.println(t1.name +" -> "+t1.ordinal);
        System.out.println(t2.name +" -> "+t2.ordinal);
        System.out.println(t3.name +" -> "+t3.ordinal);
        System.out.println(t4.name +" -> "+t4.ordinal);
        System.out.println(t5.name +" -> "+t5.ordinal);
    }
}