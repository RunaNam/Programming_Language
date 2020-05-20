class ArrayEx9_11{
    public static void main (String[] args){
        int [] numArr = new int[10];
        int[] count = new int[10];
        for (int i = 0; i<numArr.length; i++){
            System.out.print(numArr[i]= (int)(Math.random()*10));
        }
        System.out.println();

        for (int i=0; i<numArr.length; i++){
                count [numArr[i]] ++;
        }

        for (int i = 0; i<count.length; i++){
        System.out.print(count[i]);
        }
    }
}