import java.util.Arrays;

class Point implements Cloneable{
    int x, y;
    Point (int x, int y){
        this.x = x;
        this.y = y;
    }
    public String toString(){
        return "x: "+x + " y: " + y;
    }
    public Object clone(){
        Object obj = null;
        try {
            obj  = super.clone();
        }catch(CloneNotSupportedException e){}
        return obj;
    }
}
class CloneEx1_2 {
    public static void main (String[] args){
        Point original = new Point(3,5);
        Point copy = (Point)original.clone();
        System.out.println(original);
        System.out.println(copy);
        System.out.println();

        int[] arr = {1,2,4,6};
        int[] arrclone = arr.clone();
        arrclone[0] =12;
        System.out.println(Arrays.toString(arr));
        System.out.println(Arrays.toString(arrclone));
    }
}