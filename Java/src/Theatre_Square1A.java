import java.util.Scanner;

public class Theatre_Square1A {
    public Theatre_Square1A() {
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        long m = sc.nextLong();
        long a = sc.nextLong();
        long length = (n + a - 1L) / a;
        long width = (m + a - 1L) / a;
        long value = length * width;
        System.out.println(value);
    }
}