import java.util.Scanner;
public class Drink200B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int sum=0;

        for(int i=0;i<n;i++)
        {
            int value= sc.nextInt();
            sum += value;
        }
        float result = (float) sum /n;

        System.out.println(result);
    }
}
