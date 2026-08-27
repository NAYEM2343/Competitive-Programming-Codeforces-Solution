import java.util.Scanner;
public class Beautiful_YEAR271A {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int y = sc.nextInt();
        y++;
        boolean hasdup = false;
        int value =0;

        while (true)
        {

            String num = String.valueOf(Math.abs(y));
            int [] values = new int[num.length()+1];
            for(int i=0;i<num.length();i++)
            {
                values [i] = Character.getNumericValue(num.charAt(i)) ;

            }
            for(int i=0;i<num.length();i++)
            {
                for(int j = i+1;j<num.length();j++)
                {
                    if(values[i]==values[j])
                    {
                        hasdup=true;
                    }
                }

            }
            if(hasdup==true)
            {
                y++;
                hasdup = false;

            }
            else
            {
                value = y;
                break;
            }
        }
        System.out.println(value);

    }
}
