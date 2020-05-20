import java.util.*;

class TreeTest{
    public static void main (String[] args){
        TreeSet set = new TreeSet();
        String from ="b";
        String to ="d";

        set.add("abc");
        set.add("adfac");
        set.add("erwc");
        set.add("bfgdg");
        set.add("csdlkfjls");
        set.add("234erc");
        set.add("dweoi");

        System.out.println(set);
        System.out.println("range search: from"+from+"to"+to);
        System.out.println("r1: "+set.subSet(from, to));
        System.out.println("r2: "+set.subSet(from, to+"zzz"));
    }   
}