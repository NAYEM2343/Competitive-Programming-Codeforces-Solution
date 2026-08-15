import java.util.Scanner;
public class Domino_piling_50A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long M = sc.nextLong();
        long N = sc.nextLong();

        long domino = 2;
        long square = M * N;

        long placed = square  / domino;

        System.out.println(placed);



    }
}
