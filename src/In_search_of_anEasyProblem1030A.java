import java.util.Scanner;
public class In_search_of_anEasyProblem1030A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        boolean x=true;
        for(int i=0;i<n;i++)
        {
            int ni = sc.nextInt();

            if(ni==1)
            {
                x = false;
            }


        }
        if(x)
        {
            System.out.println("Easy");
        }
        else
        {
            System.out.println("Hard");
        }

    }
}
