import java.util.ArrayList;
import java.util.Scanner;
public class sumofroundnum1352A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t>0)
        {
            ArrayList<Integer> ans =new ArrayList<>();
            int n = sc.nextInt();
            int power =1;
            while(n>0)
            {
                if(n%10>0)
                {
                    ans.add(n%10*power);
                }
                n /=10;
                power *=10;
            }

            System.out.println(ans.size());

            for (int num : ans) {
                System.out.print(num + " ");
            }
            System.out.println();
            t--;
        }

    }
}
