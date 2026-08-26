import java.util.Scanner;
import java.util.Set;
import  java.util.HashSet;


public class AntonAndLetters443A {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        String set = sc.nextLine();
        Set<String> s= new HashSet<>();


        for(int i=0;i<set.length();i++)
        {

            if(97<=set.charAt(i) && 122>=set.charAt(i))
            {
                s.add(String.valueOf(set.charAt(i)));

            }
        }
        System.out.println(s.size());
    }
}
