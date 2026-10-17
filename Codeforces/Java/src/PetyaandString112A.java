import java.util.Scanner;
public class PetyaandString112A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.next();
        String b = sc.next();
        String lowerA = a.toLowerCase();
        String lowerB = b.toLowerCase();

        for(int i =0;i<lowerA.length();i++)
        {
            char charA = lowerA.charAt(i);
            char charB = lowerB.charAt(i);
            if(charA<charB)
            {
                System.out.println(-1);
                return;
            } else if (charA>charB) {
                System.out.println(1);
                return;
            }

        }
        System.out.println(0);


    }
}
