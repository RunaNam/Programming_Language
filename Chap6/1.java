class Cardtest{
    public static void main(String args[]){
        System.out.println("Card.width: " + Card.width);
        System.out.println("Card.height: " + Card.height);
        
        Card c1 = new Card();
        c1.kind = "heart";
        c1.number = 7;

        Card c2 = new Card();
        c2.kind = "spade";
        c2.number = 4;

        System.out.printf("c1 -> %s %d %n", c1.kind, c1.number);
        System.out.printf("c2 -> %s %d", c2.kind, c2.number);

    }
}

class Card{
    String kind;
    int number;
    static int width = 100;
    static int height=200;
}