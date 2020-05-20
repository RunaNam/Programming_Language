import static java.lang.System.out;
import static java.lang.Math.*;


class SuperTest{
    public static void main (String[] args){
        Child c = new Child();
        c.method();
    }
}

class Parent{
    int x =10;
}

class Child extends Parent{
    int x =20;
    void method(){
        out.println("x = "+x);
        out.println("this.x = "+this.x);
        out.println("super.x = "+super.x);
        out.println(Math.random());
    }
}