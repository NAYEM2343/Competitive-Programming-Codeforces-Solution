import java.util.Arrays;
import java.util.Scanner;
import java.util.stream.Stream;

public class helpfulmath339A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String x = sc.next();
        String result = "";

        int [] num = Stream.of(x.split("\\+")).mapToInt(Integer::parseInt).toArray();

        Arrays.sort(num);
        for(int i=0;i<num.length;i++)
        {
            result += Integer.toString(num[i]) + "+";

        }
        result = result.substring(0,result.length()-1);
        System.out.println(result);


    }
}
