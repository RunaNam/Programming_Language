import java.util.*;

class FlowEx28{
    public static void main (String[] args){
        int input = 0, answer =0;
        answer = (int)(Math.random()*100 +1);
        Scanner scanner = new Scanner(System.in);
        do {
            System.out.printf("input number between 1and 100 >> ");
            input = scanner.nextInt();
            if (input> answer){
                System.out.println("try smaller nubmer");
            }
            else if (input<answer){
                System.out.println("try bigger number");
            }
        } while (input != answer);
        System.out.printf("right!");
        scanner.close();
    }
}