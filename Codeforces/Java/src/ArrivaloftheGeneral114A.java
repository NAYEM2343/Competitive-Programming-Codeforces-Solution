import java.util.Scanner;
public class ArrivaloftheGeneral114A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n+1];

        for(int i=0;i<n;i++)
        {
            arr[i] = sc.nextInt();
        }
        int min=arr[0];
        int minindex =0;
        int max=arr[0];
        int maxindex =0;

        for(int i=0;i<n-1;i++)
        {

            if (min >= arr[i+1]) {
                min = arr[i+1];
                minindex = i+1;

            }

            if(max<arr[i+1])
            {
                max=arr[i+1];
                maxindex = i+1;
            }
        }
        int totalswap = maxindex + ((n-1)-minindex);
        if(minindex<maxindex)
        {
            totalswap = totalswap -1;
        }
        System.out.println(totalswap);

    }
}
