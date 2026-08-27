import java.util.Scanner;

public class divisibilityProblem1328A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i=0;i<n;i++)
        {
            long a = sc.nextLong();
            long b= sc.nextLong();
            while (true)
            {
                if(a%b==0)
                {
                    System.out.println(0);
                    break;
                }
                else
                {
                    long c = a%b;
                    long d=b-c;
                    System.out.println(d);
                    break;
                }
            }
        }
    }

}
