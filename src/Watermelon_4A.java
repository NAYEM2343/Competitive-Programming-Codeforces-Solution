import java.util.Scanner;

public class Watermelon_4A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int w = sc.nextInt();

        int b = w - 2;

        if (b % 2 == 0 && b != 0) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}