import java.util.*;

class HashSetLotto {
    public static void main (String[] args){
        Set set = new HashSet<>();
        for (int i=0; set.size()<6; i++){
            int num = (int)(Math.random()*45)+1;
            set.add(new Integer(num));
        }
        List list = new LinkedList(set);
        Collections.sort(list);
        System.out.println(list);

        set.add(new Person("min",22));
        set.add(new Person("min",22));
        System.out.println(set);

    }

}

class Person{
    String name;
    int age;

    Person(String name, int age){
        this.name = name;
        this.age = age;
    }

    public boolean equals(Object obj){
        if(obj instanceof Person){
            Person tmp = (Person) obj;
            return name.equals(tmp.name) && age == tmp.age;
        }
        return false;
    }

    public int hashCode(){
        return Objects.hash(name,age);
    }

    public String toString(){
        return name+":"+age;
    }
}