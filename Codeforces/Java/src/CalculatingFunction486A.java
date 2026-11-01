import java.util.Scanner;
public class CalculatingFunction486A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();

        long func;
        if(n%2==0)
        {
            func = n/2;
        }
        else
        {
            func = -(n+1)/2;
        }
        System.out.println(func);
    }
}
