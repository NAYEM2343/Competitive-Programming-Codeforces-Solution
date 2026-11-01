import java.util.Scanner;
public class tram116A {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int n = sc.nextInt();
        int[][] arr = new int[n+1][3];
        int current = 0;
        int max = 0;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<2;j++)
            {
                arr[i][j] = sc.nextInt();
            }

        }
        current = arr[0][1];
        max = current;

        for(int i=1;i<n;i++)
        {
            current -= arr[i][0];
            current += arr[i][1];
            if(current>max)
            {
                max = current;
            }
        }
        System.out.println(max);
    }
}
