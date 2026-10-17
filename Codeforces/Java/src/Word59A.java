import java.util.Scanner;
public class Word59A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int uppercasecount =0, lowercasecount=0;
        String s = sc.nextLine();
        for(int i=0;i<s.length();i++)
        {
            if(Character.isUpperCase(s.charAt(i)))
            {
                uppercasecount++;
            }
            else if(Character.isLowerCase(s.charAt(i)))
            {
                lowercasecount++;
            }

        }
        if(uppercasecount>lowercasecount)
        {
            s = s.toUpperCase();
            System.out.println(s);
        }
        else if (lowercasecount>uppercasecount) {
            s=s.toLowerCase();
            System.out.println(s);
        }
        else if(uppercasecount == lowercasecount)
        {
            s = s.toLowerCase();
            System.out.println(s);
        }

    }
}
