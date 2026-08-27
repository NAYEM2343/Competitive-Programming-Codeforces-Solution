import java.util.Scanner;
public class SoldierandBananas546A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int k = sc.nextInt();
        int n = sc.nextInt();
        int w = sc.nextInt();
        int i =0;
        while(w!=0)
        {
            i++;
            if(n>=i*k)
            {
                n=n- i*k;
                w--;

            }
            else if(n<i*k)
            {
                n = n-i*k;
                w--;
            }
            else
            {
                n=n-i*k;
                w--;
            }

        }
        if(n<0)
        {
            System.out.println(Math.abs(n));
        }
        else
        {
            System.out.println(0);
        }
    }
}
