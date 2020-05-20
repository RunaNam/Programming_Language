class InstanceofTest{
    public static void main (String args[])
    {
        FireEngine fe = new FireEngine();
        if(fe instanceof FireEngine){
            System.out.println("This is a FireEngine Instance");
        }
        if(fe instanceof Car){
            System.out.println("This is a Car Instance");
        }
        if (fe instanceof Object){
            System.out.println("This is an Object Instance");
        }
        System.out.println(fe.getClass().getName());
    }
}
class Car{}
class FireEngine extends Car{}