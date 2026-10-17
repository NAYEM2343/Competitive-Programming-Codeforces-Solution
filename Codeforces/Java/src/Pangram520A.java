import java.util.Arrays;
import java.util.Scanner;
public class Pangram520A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String x = sc.next();

        x = x.toLowerCase();
        int[] counts  = new int[n];


        for(int i=0;i<x.length();i++)
        {
             counts[i] = x.charAt(i);
        }

        int [] unique = Arrays.stream(counts).distinct().toArray();


        if(unique.length ==26)
        {
            System.out.println("YES");
        }
        else
        {
            System.out.println("NO");
        }

    }
}
