import java.util.*;

class ArrayEx18_23{
    public static void main (String[] args){
        final int SIZE = 10;
        int x = 0, y =0;

        char [] [] board = new char [SIZE] [SIZE];
        int [][] shipBoard = new int[SIZE] [SIZE];

        for (int j = 0; j<SIZE; j++){
            for (int i = 0; i<SIZE; i++)
            {
                shipBoard[j][i] = (int)(Math.random()+0.5)/1;
            }
        }
        Scanner scanner = new Scanner(System.in);
        while (true){
            System.out.printf("input coordinate (exit: 00) > ");
            String input = scanner.nextLine();

            if (input.length()==2){
                x = input.charAt(0) -'0';
                y = input.charAt(1) -'0';

                if (x == 0 && y==0) break;
            }
            if (input.length()!=2 || x<=0|| x>=SIZE||y<=0|| y>=SIZE){
                System.out.println("wrong input");
                continue;
            }
            board[x][y] = shipBoard[x-1][y-1] ==1 ? 'O' : 'X';

            for (int i =0; i<SIZE ; i++){
                System.out.println(board[i]);
            }
            System.out.println();

        }
        scanner.close();

    }
}