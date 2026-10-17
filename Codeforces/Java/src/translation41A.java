import  java.util.Scanner;
public class translation41A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        String t = sc.next();

        String reverse = new StringBuilder(s).reverse().toString();

        if(t.equals(reverse))
        {
            System.out.println("YES");
        }
        else
        {
            System.out.println("NO");
        }
    }
}
