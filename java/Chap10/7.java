import java.time.*;
import java.time.format.*;

class DateFormattedEx1_2{
    public static void main (String [] args){
        ZonedDateTime zDateTime = ZonedDateTime.now();

        String[] patternArr={
            "yyyy-MM-dd HH:mm:ss",
            "올해의 D번째 날",
            "이번달 d번째 날이자 W번째 E요일"
        };

        for (String p: patternArr){
            DateTimeFormatter formatter = DateTimeFormatter.ofPattern(p);
            System.out.println(zDateTime.format(formatter));
        }
    }
}