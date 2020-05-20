import java.util.*;

class CalendarEx2_5{
    public static void main (String[] args){
        final String[] DAY_OF_WEEK = {"","일","월","화","수","목","금","토"};
        
        Calendar date1 = Calendar.getInstance();
        Calendar date2 = Calendar.getInstance();

        date1.set(2020,2,1);//month -> start at 0 (0: January .. 2 : March)
        System.out.println("date1->"+toString(date1) +DAY_OF_WEEK[date1.get(Calendar.DAY_OF_WEEK)]+"요일");
        System.out.println("Today->"+toString(date2) +DAY_OF_WEEK[date2.get(Calendar.DAY_OF_WEEK)]+"요일");

        long difference = (date2.getTimeInMillis() - date1.getTimeInMillis())/1000;
        System.out.println("from date1 to today -> "+difference +"seconds passed");
        System.out.println("date:"+difference/(24*60*60));

        System.out.println("---------------------------------------");
        System.out.println("change date 1");
        date1.add(Calendar.DATE,1);
        System.out.println(toString(date1));
        date1.add(Calendar.MONTH,6);            //add -> 다른 필드에도 영향 있음
        System.out.println(toString(date1)); 
        date1.roll(Calendar.MONTH,1);           // roll-> 다른 필드에 영향 X
        System.out.println(toString(date1));




    }

    public static String toString(Calendar date){
        return date.get(Calendar.YEAR)+"년 "+(date.get(Calendar.MONTH)+1)+"월 "+date.get(Calendar.DATE)+"일";
    }
}