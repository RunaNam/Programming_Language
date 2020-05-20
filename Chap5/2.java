class ArrayEx5_8{
    public static void main (String[] args){
        int sum = 0;
        float avg = 0f;
        int [] score = {10,20,30,40,50};
        int max = score[0];
        int min = score[0];

        for (int i =0; i<5; i++){
            sum += score [i];
            if (max < score [i]) max = score[i];
            if(min> score[i]) min = score[i];
        }
        avg = sum/ (float)score.length;
        System.out.println("sum: "+ sum);
        System.out.println("average: "+ avg);
        System.out.println("max: "+ max);
        System.out.println("min: "+ min);
    }
}