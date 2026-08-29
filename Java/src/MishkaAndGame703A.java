import java.util.Scanner;

public class MishkaAndGame703A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n= sc.nextInt();
        int mishkaasa = 0;
        int cherish =0;

        while(n!=0)
        {
            int mi = sc.nextInt();
            int ci = sc.nextInt();

            if(mi>ci)
            {
                mishkaasa++;
            }
            else if(ci>mi)
            {
                cherish++;
            }
            n--;
        }
        if(mishkaasa>cherish)
        {
            System.out.println("Mishka");
        } else if (cherish>mishkaasa) {
            System.out.println("Chris");
        } else {
            System.out.println("Friendship is magic!^^");
        }
    }

}
