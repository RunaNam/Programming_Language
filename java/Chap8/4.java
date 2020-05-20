import java.io.*;

class Exception12_16{
    public static void main (String[] args){
        try {
            File f = createFile(args[0]);
            System.out.println(f.getName()+"create file successfully");
        } catch (Exception e){
            System.out.println(e.getMessage()+ "write again");
        }
    }

    static File createFile(String fileName) throws Exception{
        if (fileName == null || fileName.equals(""))
            throw new Exception("invaild filename");
        File f = new File (fileName);
        f.createNewFile();
        return f;
    }
}

