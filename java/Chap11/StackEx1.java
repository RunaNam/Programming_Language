import java.util.*;

public class StackEx1{
    public static Stack back = new Stack();
    public static Stack forward = new Stack();

    public static void main (String[] args){
        goURL("1.Naver");
        goURL("2.Daum");
        goURL("3.Google");
        goURL("4.Github");

        PrintStatus();

        goBack();
        PrintStatus();

        goBack();
        PrintStatus();

        goForward();
        PrintStatus();

        goURL("Java");
        PrintStatus();


    }

    public static void PrintStatus(){
        System.out.println("back: " + back);
        System.out.println("forward: "+forward);
        System.out.println("now: "+ back.peek());
        System.out.println();
    }

    public static void goURL(String url){
        back.push(url);
        if(!forward.empty())
            forward.clear();
    }

    public static void goForward(){
        System.out.println("forward!");
        if(!forward.empty())
            back.push(forward.pop());
    }

    public static void goBack(){
        System.out.println("back!");
        if(!back.empty())
            forward.push(back.pop());
    }

}