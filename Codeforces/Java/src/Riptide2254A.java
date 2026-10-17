import java.util.Arrays;
import  java.util.Scanner;
public class Riptide2254A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test!=0)
        {
            int[] arr = new int[3];
            for(int i=0;i<3;i++)
            {
                arr[i] = sc.nextInt();
            }
            Arrays.sort(arr);

            int d1 = arr[1]-arr[0];
            int d2= arr[2]-arr[1];
            int result = Math.min(d1,d2);

            System.out.println(result);
            test--;



        }

    }

}
