import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;
public class BoyorGirl236A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.next();
        int count =0;

        Set<Character> each = new HashSet<>();

        for(int i=0;i<s.length();i++)
        {
            each.add(s.charAt(i));


        }
        if(each.size()%2==1)
        {
            System.out.println("IGNORE HIM!");
        }
        else
        {
            System.out.println("CHAT WITH HER!");
        }
    }

}
