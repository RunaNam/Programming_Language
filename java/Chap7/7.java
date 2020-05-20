class InnerEx1_4{
    class instanceInner{
        int iv = 100;
        final static int CONST = 100;
    }
    static class StaticInner{
        int iv =200;
         static int cv = 200;
    }
    void myMethod(){
        class LocalInner{
            int iv=300;
            final static int CONST = 300;
        }
    }
    public static void main (String args[]){
        System.out.println(instanceInner.CONST);
        System.out.println(StaticInner.cv);
    }
}