import java.util.Scanner;

public class Team231A {
    public Team231A() {
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[][] arr = new int[n][3];
        int position = 0;
        int count = 0;

        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < 3; ++j) {
                arr[i][j] = sc.nextInt();
            }
        }

        for(int i = 0; i < n; ++i) {
            position = 0;

            for(int j = 0; j < 3; ++j) {
                if (arr[i][j] == 1) {
                    ++position;
                }
            }

            if (position > 1) {
                ++count;
            }
        }

        System.out.println(count);
    }
}
