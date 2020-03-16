import java.util.StringJoiner;

class StringEx1_4{
    public static void main (String[] args){
        String animals = "cat, dog, mouse";
        String [] arr = animals.split(",");

        System.out.println(String.join("-", arr));
        StringJoiner sj = new StringJoiner("/","[","]");

        for (String s : arr)
            sj.add(s);
        System.out.println(sj.toString());
        
    }
}