import java.util.*;

class HashMapEx{
    public static void main (String [] args){
        HashMap user = new HashMap();
        user.put ("aaa","1234");
        user.put ("bbb","1234");
        user.put ("ccc","1234");

        Scanner s = new Scanner (System.in);

        System.out.println("input id and password");
        System.out.print("id: ");
        String id = s.nextLine().trim();

        System.out.print("password: ");
        String password = s.nextLine().trim();
        System.out.println();

        if (!user.containsKey(id) || !(user.get(id).equals(password)))
            System.out.println("해당 아이디 또는 비밀번호가 존재하지 않습니다.");
        else{
            HashMap map = new HashMap();
            map.put("a", new Integer(100));
            map.put("b", new Integer(40));
            map.put("d", new Integer(60));
            map.put("d", new Integer(80));
            map.put("e", new Integer(90));

            Set set = map.entrySet();
            Iterator it = set.iterator();

            while (it.hasNext()){
                Map.Entry e = (Map.Entry)it.next();
                System.out.println("name: "+e.getKey()+"  score: "+e.getValue());
            }
        }
    }
}