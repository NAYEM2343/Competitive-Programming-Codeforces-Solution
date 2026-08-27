import java.util.Scanner;
public class NextRound_158A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int k = sc.nextInt();

        int[] arr = new int[n];
        int position = 0;

        for(int i=0;i<n;i++)
        {
            arr[i] = sc.nextInt();
        }
        for(int j=0;j<n;j++)
        {
            if(arr[k-1]<=arr[j] && arr[j]>0)
            {
                position++;

            }
        }
        if(position != 0)
        {
            System.out.println(position);
        }
        else
        {
            System.out.println(0);
        }
    }
}
