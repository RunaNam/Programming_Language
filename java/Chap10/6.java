import java.time.*;
import java.time.temporal.*;

class NewTimeEx1_2{
    public static void main (String [] args){
        LocalDate today = LocalDate.now();
        LocalTime now = LocalTime.now();

        LocalDate a = LocalDate.of(1999,06,03);
        LocalTime b = LocalTime.of(15, 12, 46);

        System.out.println("today: "+today +" time:" +now);
        System.out.println("a:"+a+b);

        System.out.println(a.withYear(2000));
        System.out.println(a.plusDays(1));

        System.out.println(ChronoField.CLOCK_HOUR_OF_DAY.range());
        System.out.println(ChronoField.HOUR_OF_DAY.range());

        LocalDateTime dt = LocalDateTime.now();

        ZoneId  zid = ZoneId.of("Asia/Seoul");
        ZonedDateTime zdt = dt.atZone(zid);
        ZonedDateTime seoulTime = ZonedDateTime.now();

        ZoneId  nyid = ZoneId.of("America/New_York");
        ZonedDateTime nyTime = ZonedDateTime.now().withZoneSameInstant(nyid);
        
        OffsetDateTime odt = zdt.toOffsetDateTime();

        System.out.println(dt);
        System.out.println(zid);
        System.out.println(zdt);
        System.out.println(seoulTime);
        System.out.println(nyTime);
        System.out.println(odt);


        
    }
}