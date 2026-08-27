import java.util.Scanner;

public class vanyaandfence677A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int h = sc.nextInt();
        int width = 0;
        for(int i=1;i<=n;i++)
        {
            int height = sc.nextInt();
            if(height>h)
            {
                width += 2;
            }
            else if(height<=h)
            {
                width++;
            }

        }
        System.out.println(width);

    }
}
