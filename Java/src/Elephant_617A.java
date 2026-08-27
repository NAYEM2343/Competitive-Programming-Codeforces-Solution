import java.util.Scanner;

public class Elephant_617A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int j=5;
        int count = 0;
        while(x!=0)
        {
            if(x>=j)
            {
                x -= j;
                count++;
            }
            else
            {
                j--;
            }
        }
        System.out.println(count);


    }
}
