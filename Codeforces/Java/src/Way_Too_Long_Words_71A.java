import java.util.Scanner;

public class Way_Too_Long_Words_71A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();


        for(int i = 1; i<=n; i++)
        {
            String statement = sc.next();
            int length = statement.length();

            if(length>10)
            {

                String first = statement.substring(0,1);
                String last = statement.substring(statement.length()-1);
                String mid = String.valueOf(length-2);

                String output = first + mid + last;

                System.out.println(output);
            }
            else
                System.out.println(statement);
        }
    }
}
