class Card{
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

class CardToString1_2{
    public static void main (String[] args){
        Card c1 = new Card();
        Card c2 = new Card("Spade", 1);
        System.out.println(c1.toString());
        System.out.println(c2.toString());
        System.out.println(c1.equals(c2));
    }
}