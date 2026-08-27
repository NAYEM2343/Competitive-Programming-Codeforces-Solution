import java.util.Scanner;
public class antonanddanik734A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String s = sc.next();
        int Anton = 0;
        int Danik = 0;


        for(int i=0;i<n;i++)
        {
            if('A' == s.charAt(i))
            {
                Anton++;
            }
            else if('D' == s.charAt(i))
            {
                Danik++;
            }

        }
        if(Anton >Danik)
        {
            System.out.println("Anton");
        }
        else if (Danik>Anton)
        {
            System.out.println("Danik");
        } else if (Anton==Danik) {
            System.out.println("Friendship");
        }

    }
}
