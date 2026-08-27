import java.util.Scanner;
public class Hit_the_lottery996A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        long count =0;

        while(n!=0)
        {
            if(n>=100)
            {
                n-=100;
                count++;
            }

            else if (n>=20)
            {
                n-=20;
                count++;
            }
            else if (n>=10)
            {
                n-=10;
                count++;
            }
            else if (n>=5)
            {
                n-=5;
                count++;
            }
            else if (n>=1)
            {
                n-=1;
                count++;
            }
        }
        System.out.println(count);
    }
}
