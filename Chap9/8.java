import java.util.*;
import static java.util.Objects.*;

class ObjectsTest{
    public static void main (String[] args){
        String[][] str2D = new String [][] {{"a","b"},{"A","B"}};
        String[][] str2D_2 = new String [][] {{"a","b"},{"A","B"}};

        System.out.print("str2D: {");
        for (String[] tmp : str2D)
            System.out.print(Arrays.toString(tmp));
        System.out.println("}");

        System.out.print("str2D_2: {");
        for (String[] tmp : str2D)
            System.out.print(Arrays.toString(tmp));
        System.out.println("}");

        System.out.println("--------------------------");

        System.out.println(Objects.equals(str2D, str2D_2));
        System.out.println(Objects.deepEquals(str2D, str2D_2));
        System.out.println(Objects.toString(null));

        Comparator c = String.CASE_INSENSITIVE_ORDER;

        System.out.println(""+compare("aa","ab",c));
        System.out.println(""+compare("aa","ba",c));

        System.out.println("--------------------------");

        Random rand = new Random(1);
        for (int i =0; i<3; i++)
            System.out.println(rand.nextInt(10));

        System.out.println("--------------------------");

        Scanner s = new Scanner(System.in);
        String prompt =">>";
        String[] argArr = null;

        while (true){
            System.out.print(prompt);

            String input = s.nextLine();
            input = input.trim();
            argArr = input.split(" +");
            StringTokenizer st = new StringTokenizer(input," +");

            String command = argArr[0].trim();

            if ("".equals(command)) continue;

            command = command.toLowerCase();
            if (command.equals("q"))
                break;
            else
                for(int i=0; i<argArr.length; i++){
                    System.out.println(argArr[i]);
                    System.out.println("---");
                    System.out.println(st.nextToken());
                }
            

        }
    }
}