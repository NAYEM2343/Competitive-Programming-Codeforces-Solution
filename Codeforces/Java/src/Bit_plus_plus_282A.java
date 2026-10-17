import java.util.Scanner;

public class Bit_plus_plus_282A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = 0;
        int n = sc.nextInt();
        for(int i=1;i<=n;i++)
        {
            String statement = sc.next();

            if( statement.contains("++X") || statement.contains("X++") )
            {
                x++;
            }
            else if( statement.contains("--X") || statement.contains("X--"))
            {
                x--;
            }
        }
        System.out.println(x);
    }
}