import java.util.Arrays;
import java.util.Scanner;
public class AmusingJoke141A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String x = sc.next();
        String y = sc.next();
        String z = sc.next();

        String xy = x+y;

        char[] xy1 = xy.toCharArray();
        char[] z1= z.toCharArray();

        Arrays.sort(xy1);
        Arrays.sort(z1);



        xy = new String(xy1);
        z= new String(z1);

        if(xy.equals(z))
        {
            System.out.println("YES");
        }
        else
        {
            System.out.println("NO");
        }

    }
}
