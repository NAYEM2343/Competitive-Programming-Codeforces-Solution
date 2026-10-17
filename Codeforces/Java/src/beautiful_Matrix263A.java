import java.util.Scanner;
public class beautiful_Matrix263A {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int row = 0;
        int column = 0;
        int [][] arr = new int[5+1][5+1];

        for(int i=1;i<=5;i++)
        {
            for(int j=1;j<=5;j++)
            {
                arr[i][j] = sc.nextInt();
            }
        }
        for(int i=1;i<=5;i++)
        {
            for(int j=1;j<=5;j++)
            {
                if(arr[i][j]==1)
                {
                    row = 3-i;
                    column = 3-j;
                }
            }
        }
        System.out.println(Math.abs(row) + Math.abs(column));

    }
}
