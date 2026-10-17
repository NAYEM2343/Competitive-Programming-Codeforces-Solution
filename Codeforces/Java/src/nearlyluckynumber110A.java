import  java.util.Scanner;
public class nearlyluckynumber110A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        long n = sc.nextLong();

        String number = String.valueOf(Math.abs(n));
        int count =0;
        for(int i=0;i<number.length();i++)
        {
            if(Character.getNumericValue(number.charAt(i))==4 || Character.getNumericValue(number.charAt(i))==7)
            {
                count++;
            }
        }
        if(count==4 || count==7)
        {
            System.out.println("YES");
        }
        else
        {
            System.out.println("NO");
        }



    }
}
