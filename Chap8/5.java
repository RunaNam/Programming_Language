class FinalTest1_3{
    public static void main (String args[]){
        try {
        FinalTest1_3.method1();
        }catch(Exception e){
            System.out.println("catch error in main");
        }

    }
    static void method1()throws Exception{
        try {
            System.out.println("method1");
            throw new Exception();
        }catch(Exception e){
            System.out.println("catch error in method1");
            throw e;
        }finally{
            System.out.println("finally of method1");

        }
    }
}