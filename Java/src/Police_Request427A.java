import java.util.Scanner;

public class Police_Request427A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int h=0;
        int untreated =0;

        while(n!=0)
        {
            int c= sc.nextInt();
            if(c<0)
            {
                if(Math.abs(c)>h)
                {
                    untreated++;
                }
                else if(h>=Math.abs(c))
                {
                    h-=Math.abs(c);
                }
            }
            else if(c>0)
            {
                h+=c;
            }

            n--;
        }
        System.out.println(untreated);
    }
}
