class Exception8_9{
    public static void main (String args[]){
        try {
            Exception e = new Exception("lala");
            throw e;
        } catch(Exception e){
            System.out.println("error message:" + e.getMessage());
            e.printStackTrace();
        }
        System.out.println("program finish");
    }
}