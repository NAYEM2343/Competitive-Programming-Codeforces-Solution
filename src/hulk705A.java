import java.util.Scanner;
public class hulk705A {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);

        int n = sc.nextInt();
        StringBuilder modify = new StringBuilder();

        for(int i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                modify.append(" I love");
            }
            else
            {
                modify.append(" I hate");
            }
            if(i!=n)
            {
                modify.append(" that");
            }
        }
        modify.append(" it");
        System.out.println(modify);
    }
}
