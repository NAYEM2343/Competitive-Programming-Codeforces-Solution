import java.util.HashMap;
import java.util.Scanner;
public class sumoftwovalues102961G {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int x = sc.nextInt();
        HashMap<Integer,Integer> map = new HashMap<>();
        for(int i=1;i<=n;i++)
        {
            int y = sc.nextInt();
            int value =x - y;
            if(map.containsKey(value))
            {
                System.out.println(map.get(value)+" "+i);
                return;
            }
            map.put(y,i);
        }
        System.out.println(-1);
    }
}
