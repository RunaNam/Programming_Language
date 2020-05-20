class Factorial_Power_Test{
   static long factorial(int n){
       if (n<=0||n>10) return -1;
       else if (n<=1) return 1;
       return n*factorial(n-1);
   } 

   static long power(int n, int x){
       if (x==1) return n;
       return n* power(n, x-1);
   }

   public static void main (String [] args){
       int n =10;
       long r1 =0;
       int x = 2;
       long r2 = 0;
       for (int i =1; i<=n; i++){
           r1 = factorial(i);
           r2 = power(i,x);
           if (r1 == -1){
               System.out.println("error!");
               break;
           }
           System.out.printf("%2d! = %7d%n", i, r1);
           System.out.printf("%2d^2 = %6d%n%n", i, r2);
       }
   }

}