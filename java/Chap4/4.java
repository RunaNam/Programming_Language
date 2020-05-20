import java.util.*;

class FlowEx27{
    public static void main (String[] args){
        int num = 0, sum =0;
        Boolean flag  = true;
        Scanner scanner = new Scanner(System.in);
        System.out.println("input number. (exit : 0)");

        while(flag){
            System.out.printf(">>");
            num= scanner.nextInt();
            sum += num;
            if (num == 0){
                flag = false;
            } 
        }
        System.out.printf("sum : %d", sum);
        scanner.close();
    }
}