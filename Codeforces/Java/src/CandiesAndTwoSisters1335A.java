import java.util.Scanner;
public class CandiesAndTwoSisters1335A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x= sc.nextInt();


        for(int i=0;i<x;i++)
        {
            int n=sc.nextInt();
            int result = (n-1)/2;
            System.out.println(result);
        }
    }
}