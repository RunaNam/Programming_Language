class EqualsEx1_2_Hashcode{
    public static void main (String[] args){
        Value v1 = new Value(10);
        Value v2 = new Value(10);
        if (v1.equals(v2))
            System.out.println("same");
        else
            System.out.println("different");
        
        
        v2 = v1;
        if (v1.equals(v2))
        System.out.println("same");
        else
            System.out.println("different");
        System.out.println();
        //equals는 주소값으로 비교한다 (오버라이딩 해서 값의 비교로 변경할 수 있음)

        String str1 = new String("abc");
        String str2 = new String("abc");

        System.out.println(str1.equals(str2));
        System.out.println(str1.hashCode());
        System.out.println(str2.hashCode());
        System.out.println(System.identityHashCode(str1));
        System.out.println(System.identityHashCode(str2));

    }
}

class Value {
    int value;

    Value (int value){
        this.value = value;
    }

}