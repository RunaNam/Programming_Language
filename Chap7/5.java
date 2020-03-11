import java.util.*;

class Product {
    int price;
    int bonusPoint;

    Product(int price) {
        this.price = price;
        bonusPoint = (int) (price / 10.0);
    }
}

class TV extends Product {
    TV() {
        super(100);
    }
    public String toString() {
        return "TV";
    }
}

class Computer extends Product {
    Computer() {
        super(200);
    }
    public String toString(){
        return "Computer";
    }
}

class Audio extends Product {
    Audio() {
        super(50);
    }
    public String toString(){
        return "Audio";
    }
}

class Buyer{
    int j=0;
    int money = 1000;
    int bonusPoint =0;
    //Product [] items = new Product [10];
    Vector items = new Vector();

    void buy (Product p){
        if (money <p.price){
            System.out.println("There is not enough balance to purchase.");
            return;
        }
        money -= p.price;
        bonusPoint += p.bonusPoint;
        //items[j++] = p;
        items.add(p);
        System.out.println("you bought "+ p);
    }

    void refund(Product p){
        if (items.remove(p)){
            money += p.price;
            bonusPoint -= p.bonusPoint;
            System.out.println("refund "+ p);
        }else 
            System.out.println("there is no such item");
    }

    void summary (){
        int sum =0;
        String itemList ="";
        if(items.isEmpty()) {
            System.out.println("don't have any products you've purchased");
            return;
        }
        // for (int i =0; i<items.length; i++){
        //    // if (items[i]==null) break;
        //     itemList += items[i]+", ";
        //     sum += items[i].price;
        // }

        for (int i =0; i<items.size(); i++){
            Product p = (Product)items.get(i);
            sum += p.price;
            itemList += (i==0) ? "" + p : ", " + p;
        }
        System.out.println("buy list : "+itemList);
        System.out.println("sum : "+sum);
    }
}
class PolyArgumentTest{
    public static void main (String [] args){
        Buyer b = new Buyer();

        b.buy(new TV());
        b.buy(new Computer());
        b.buy(new Audio());
        
        b.summary();
        System.out.println();
    }
}
