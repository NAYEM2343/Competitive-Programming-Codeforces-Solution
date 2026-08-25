import java.util.HashSet;
import java.util.Scanner;
import java.util.HashSet;
import java.util.Set;
public class Iwannabetheguy {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int n= sc.nextInt();
        Set<Integer> level = new HashSet<>();
        int x = sc.nextInt();
        for(int i=0;i<x;i++)
        {
            level.add(sc.nextInt());
        }
        int y= sc.nextInt();
        int[] y1 = new int[y];
        for(int i=0;i<y;i++)
        {
            level.add(sc.nextInt());
        }

        if(level.size()==n)
        {
            System.out.println("I become the guy.");
        }
        else
        {
            System.out.println("Oh, my keyboard!");
        }

    }
}
