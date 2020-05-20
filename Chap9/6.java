class StringEx7{
    public static void main (String [] args){
        String name = "Hello.java";

        int idx = name.indexOf(".");

        String filename = name.substring(0, idx);
        String ext = name.substring(idx+1);

        System.out.println(filename);
        System.out.println(ext);
        
    }
}