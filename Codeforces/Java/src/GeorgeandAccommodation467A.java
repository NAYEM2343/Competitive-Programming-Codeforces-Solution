import java.util.Scanner;
public class GeorgeandAccommodation467A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int rooms = 0;
        int [][] arr = new int[n+1][3];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<2;j++)
            {
                arr[i][j] = sc.nextByte();
            }
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i][1]-arr[i][0]>=2)
            {
                rooms++;
            }
        }
        System.out.println(rooms);
    }
}
