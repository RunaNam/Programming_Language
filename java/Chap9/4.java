final class Card{
    String kind;
    int num;

    Card (){
        this("Spade",1);
    }
    Card(String kind, int num){
        this.kind = kind;
        this.num = num;
    }
    public String toString(){
        return "Kind: " + kind + " Number: "+num;
    }   
}
class ClassEx1{
    public static void main (String[] args)throws Exception{
        Card c1 = new Card();
        Card c2 = Card.class.newInstance();

        // Class cobj = c1.getClass();

        System.out.println(c1);
        System.out.println(c2);
        // System.out.println(cojb.getName());
        // System.out.println(cojb.toGenericString());
        // System.out.println(cojb.toString());
        

    }
}