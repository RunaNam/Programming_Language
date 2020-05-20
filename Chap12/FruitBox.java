import java.util.*;

class Fruit                 {
    String name;
    int weight;
    Fruit(String name, int weight){
        this.name = name;
        this.weight = weight;
    }
    public String toString() {return name+":"+weight;}
}
class Apple extends Fruit   {
    Apple(String name, int weight){
        super(name,weight);
    }
}
class Grape extends Fruit   {
    Grape(String name, int weight){
        super(name,weight);
    }
}
class Toy {public String toString() {return "Toy";}}

class AppleComp implements Comparator<Apple>{
    public int compare (Apple t1, Apple t2){
        return t2.weight - t1.weight;
    }
}

class GrapeComp implements Comparator<Grape>{
    public int compare (Grape t1, Grape t2){
        return t2.weight - t1.weight;
    }
}

class FruitBox {
    public static void main (String[] args){
        Box<Fruit> fruitBox = new Box<Fruit>();
        Box<Apple> appleBox = new Box<Apple>();
        Box<Toy> toyBox = new Box<Toy>();

        fruitBox.add(new Fruit("apple",122));
        fruitBox.add(new Apple("apple",130));
        fruitBox.add(new Apple("aPPle",140));

        appleBox.add(new Apple("apple",110));
        appleBox.add(new Apple("aPPle",140));
        appleBox.add(new Apple("apple",130));
        System.out.println(appleBox);
        
 
        Collections.sort(appleBox.getlist(), new AppleComp());

        //appleBox.add(new Fruit());

        toyBox.add (new Toy());
        toyBox.add (new Toy());
        toyBox.add (new Toy());

        System.out.println(fruitBox);
        System.out.println(appleBox);
        System.out.println(toyBox);
    }
}

class Box<T>{
    ArrayList<T> list = new ArrayList<T>();
    ArrayList<T> getlist() {return list;}
    void add(T item)    {list.add(item);}
    T get(int i)        {return list.get(i);}
    int size()          {return list.size();}
    public String toString(){ return list.toString();}
}
