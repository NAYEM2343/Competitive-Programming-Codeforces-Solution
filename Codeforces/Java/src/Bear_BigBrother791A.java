import java.util.Scanner;
public class Bear_BigBrother791A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();

        int count = 0;
        while (true)
        {
            if(a<=b)
            {
                a *= 3;
                b *=2;
                count++;
            }
            else
            {
                break;
            }

        }
        System.out.println(count );


    }
}
