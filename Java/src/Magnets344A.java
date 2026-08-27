import java.util.Scanner;
public class Magnets344A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] arr = new String[n+1];

        int count =1;
        for(int i=0;i<n;i++)
        {
            arr[i] =  sc.next();

        }
        for(int i=1;i<n;i++)
        {
            if(!arr[i].equals(arr[i - 1]))
            {
                count++;
            }
        }
        System.out.println(count);




    }
}
