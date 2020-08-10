import java.util.*;

public class CodeForces {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int TestCases = scanner.nextInt();
        for (int tests = 0; tests < TestCases; tests++) {
            int counter = 0;
            int inputRows = scanner.nextInt();
            int inputCols = scanner.nextInt();
            int[][] outputBelt = new int[inputRows][inputCols];
            for (int i = 0; i < inputRows; i++) {
                String myString = scanner.next();
                for (int j = 0; j < inputCols; j++) {
                    outputBelt[i][j] = myString.charAt(j);
                }
            }

            for (int i = 0; i < inputRows - 1; i++) {
                if (outputBelt[i][inputCols - 1] != 'D') {
                    counter++;
                }
            }
            for (int j = 0; j < inputCols - 1; j++) {
                if (outputBelt[inputRows - 1][j] != 'R') {
                    counter++;
                }
            }
            System.out.println(counter);
        }
    }
}
