import java.util.*;

class ArraysEx{
    public static void main (String [] args){
        int [] arr = {0,1,2,3,4};
        int [][] arr2D  ={{11,22,33},{44,55,66}};

        System.out.println("arr= "+Arrays.toString(arr));
        System.out.println("arr2D= "+Arrays.deepToString(arr2D));

        int[] arr2 = Arrays.copyOf(arr, arr.length);
        int[] arr3 = Arrays.copyOf(arr, 3);
        int[] arr4 = Arrays.copyOf(arr, 7);
        int[] arr5 = Arrays.copyOfRange(arr, 2, 5);
        int[] arr6 = Arrays.copyOfRange(arr, 0, 5);


        System.out.println("arr= "+Arrays.toString(arr));
        System.out.println("arr2= "+Arrays.toString(arr2));
        System.out.println("arr3= "+Arrays.toString(arr3));
        System.out.println("arr4= "+Arrays.toString(arr4));
        System.out.println("arr5= "+Arrays.toString(arr5));
        System.out.println("arr6= "+Arrays.toString(arr6));

        int[] arr7 = new int [5];

        Arrays.fill(arr7, 9);
        System.out.println("arr7= "+Arrays.toString(arr7));

        Arrays.setAll(arr7, i-> (int)(Math.random()*6)+1);
        System.out.println("arr7= "+Arrays.toString(arr7));

        for (int i : arr7){
            char [] graph = new char[i];
            Arrays.fill(graph, '*');
            System.out.println(new String(graph)+i);
        }
        
        char[] chArr = {'a','d','c','b','e'};

        System.out.println(Arrays.toString(chArr));
        System.out.println(Arrays.binarySearch(chArr, 'b'));
        Arrays.sort(chArr);
        System.out.println(Arrays.binarySearch(chArr, 'b'));

    }
}