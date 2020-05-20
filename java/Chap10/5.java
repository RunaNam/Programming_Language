import java.text.*;

class ChoiceFormatEx1_2_Message1_4{
    public static void main (String[] args){
        double[] limit ={60,70,80,90};
        String[] grade = {"D","C","B","A"};

        int [] scores ={100,75,86,94};
        
        ChoiceFormat form = new ChoiceFormat(limit, grade);

        for (int i =0; i<scores.length; i++)
            System.out.println(scores[i]+":"+form.format(scores[i]));

        String msg = "Name: {0} | Tel: {1} | Age: {2} | Birthday: {3}";
        Object[][] arguments={
            {"G","00-1111-2222","22","06-03"},
            {"B","00-1111-3333","33","06-03"},
    };
        for (int i =0; i<arguments.length; i++)
      {  String result = MessageFormat.format(msg,arguments[i]);
        System.out.println(result);}
    }
}