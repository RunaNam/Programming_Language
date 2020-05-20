class ArrayEx12_17 {
    public static void main (String [] args){
        String src ="ABCDE";
        System.out.println(src.charAt(1));

        if(args.length !=3){
            System.out.println("usage: ArrayEx12_17 NUM1 OP NUM2");
            System.exit(0);
        }
        int num = Integer.parseInt(args[0]);
        char op = args[1].charAt(0);
        int num2 = Integer.parseInt(args[2]);
        int result = 0;
        switch(op){
            case '+':
                result = num + num2;
                break;
            case '-':
                result = num - num2;
                break;
            case '/':
                result = num / num2;
                break;
            case '*':
                result = num*num2;
            default:
                System.out.println("wrong operator");
        }
        System.out.println("result : "+ result);
    }
}