import java.util.Scanner;
import java.util.Stack;

public class ultrafastmathematician61A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String x1 = sc.next();
        String y1= sc.next();
        StringBuilder xy = new StringBuilder();

        for(int i=0;i<x1.length();i++)
        {
            if(x1.charAt(i)=='0'&&y1.charAt(i)=='0')
            {
                xy.append("0");
            }
            else if(x1.charAt(i)=='0'&&y1.charAt(i)=='1')
            {
                xy.append("1");
            }
            else if(x1.charAt(i)=='1'&&y1.charAt(i)=='1')
            {
                xy.append("0");
            }
            else if(x1.charAt(i)=='1'&&y1.charAt(i)=='0')
            {
                xy.append("1");
            }

        }
        System.out.println(xy);

    }
}
