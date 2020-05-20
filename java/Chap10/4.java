import java.util.*;
import java.text.*;

class DateFormatEx1_3{
    public static void main (String[] args){
        Calendar cal = Calendar.getInstance();
        cal.set(2020, 3, 16);

        Date day = cal.getTime();

        SimpleDateFormat sdf1, sdf2, sdf3;

        sdf1 = new SimpleDateFormat("yyyy-MM-dd");
        sdf2 = new SimpleDateFormat("yy-MM-dd E요일");
        sdf3 = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss a");
        
        System.out.println(sdf1.format(day));
        System.out.println(sdf2.format(day));
        System.out.println(sdf3.format(day));
    }
}