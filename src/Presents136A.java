import java.util.Scanner;
public class Presents136A {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int n= sc.nextInt();

        int[] arr = new int[n+1];
        int [] arr2 = new int[n+1];

        for(int i=0;i<n;i++)
        {
            arr[i] = sc.nextInt();
        }
        for(int i=0;i<n;i++)
        {
            int position = arr[i];
            arr2[position] = i+1;
        }
        for(int i=0;i<n;i++)
        {
            System.out.print(arr2[i+1]+" ");
        }
    }

}
