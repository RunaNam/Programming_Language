import java.util.*;

class HashSet{
    public static void main (String[] args){
        HashSet setA = new HashSet();
        HashSet setB = new HashSet();
        HashSet setHab = new HashSet();
        HashSet setKyo = new HashSet();
        HashSet setCha = new HashSet();

        setA.add("1");        setA.add("2");
        setA.add("3");        setA.add("4");
        setA.add("5");
        System.out.println("A: "+setA);

        setB.add("5");        setB.add("7");
        setB.add("8");        setB.add("4");
        setB.add("9");
        System.out.println(": "+setB);

        Iterator it = setB.iterator();

        //add 에러 -> 좀더 찾아볼 것 

    }
}