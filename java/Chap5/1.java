class ArrayEx1_4 {
    public static void main (String[] args){
        int [] score = new int [5];
        System.out.println("Before Change");
        for (int i =0; i<5; i++){
            score [i] = i*20;
            System.out.printf("score[%d] : %d %n", i, score[i]);
        }
        System.out.printf("lenght: %d%n", score.length);

        System.out.println("After Change");
        int [] score2 = new int [10];
        for (int i=0; i<5; i++) score2[i] = score[i];

        score = score2;

        for (int i =0; i<5; i++){
            System.out.printf("score2[%d] : %d %n", i, score2[i]);
        }
        System.out.printf("lenght: %d%n", score2.length);

        System.out.println("After Change version2");
        int [] score3 = new int [10];
        System.arraycopy(score, 0, score3, 0, score.length);

        for (int i =0; i<5; i++){
            System.out.printf("score23[%d] : %d %n", i, score3[i]);
        }

        
    }
}