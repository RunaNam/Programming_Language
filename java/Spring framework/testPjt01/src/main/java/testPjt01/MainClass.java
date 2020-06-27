package testPjt01;
import org.springframework.context.support.GenericXmlApplicationContext;

public class MainClass {
	public static void main (String[]args) {
//		TransprotationWalk transportationWalk = new TransprotationWalk();
//		transportationWalk.move();
		
		GenericXmlApplicationContext ctx = new GenericXmlApplicationContext("classpath:applicationContext.xml");
		TransportationWalk transportationWalk = ctx.getBean("tWalk",TransportationWalk.class);
		transportationWalk.move();
		ctx.close();
	}
}
