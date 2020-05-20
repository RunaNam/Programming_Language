import java.util.*;

class ArrayListEx1_2{
    public static void main (String[] args){
        ArrayList list1 = new ArrayList(10);
        for (int i =0; i<5; i++){
            list1.add(new Integer((int)(Math.random()*10)));
        }
        ArrayList list2 = new ArrayList(list1. subList(1, 4));
        print(list1, list2);

        Collections.sort(list1);
        Collections.sort(list2);
        print(list1, list2);

        System.out.println(list1.containsAll(list2));
        list2.add(3, "a");
        print(list1, list2);

        System.out.println(list1.retainAll(list2));
        print(list1, list2);

        for (int i = list2.size() -1; i>=0; i--){
            if (list1.contains(list2.get(i)))
                list2.remove(i);
        }
        print(list1, list2);

        final int LIMIT = 10;
        String source = "0123456789abcdefghijklmnopqrstuwxyz";
        int length = source.length();

        List list = new ArrayList<>(length/LIMIT +10);

        for (int i =0; i<length; i+=LIMIT){
            if(i+LIMIT <length)
                list.add(source.substring(i, i+LIMIT));
            else
                list.add(source.substring(i));
        }
        for (int i=0; i<list.size(); i++){
            System.out.println(list.get(i));
        }
        

    }
    static void print (ArrayList list1, ArrayList list2){
        System.out.println("list1: "+list1);
        System.out.println("list2: "+list2);
        System.out.println();
    }
}