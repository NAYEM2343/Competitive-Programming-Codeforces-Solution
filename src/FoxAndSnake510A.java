import java.util.Scanner;
public class FoxAndSnake510A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int row = sc.nextInt();
        int colun = sc.nextInt();
        boolean right = true;
        for(int i=0;i<row;i++)
        {

            if(i%2==1)
            {

                for(int j=0;j<colun-1;j++)
                {
                    if(right)
                    {
                        System.out.print(".");
                        if(colun-2==j)
                        {
                            System.out.print("#");
                        }
                    }
                    else
                    {

                        if(j-i==0)
                        {
                            System.out.print("#");
                        }

                    }
                }
                System.out.print("");

            }
            else
            {
                for(int j=0;j<colun;j++)
                {
                    System.out.print("#");
                }

            }
            System.out.println();
            right = false;

        }
    }
}
