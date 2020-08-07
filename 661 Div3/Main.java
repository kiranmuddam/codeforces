import java.io.*;
import java.util.*;

public class Main {

    public void solve(int[] participantWeights) {

        int n = participantWeights.length;
        if (n < 2) {
            out.println(0);
            return;
        }

        Arrays.sort(participantWeights);
        int finalAnswer = 0;
        int minSValue = participantWeights[0] + participantWeights[1];
        int maxSValue = participantWeights[n - 2] + participantWeights[n - 1];

        for (int s = minSValue; s <= maxSValue; s++) {

            int t = 0;
            Map<Integer, Integer> map = new HashMap<>();
            for(int a : participantWeights)map.put(a, map.getOrDefault(a, 0) + 1);

            for (int i = 0; i < participantWeights.length; i++) {
                if (map.get(participantWeights[i]) == 0)continue;
                if (s <= participantWeights[i])break;

                int i1 = s - participantWeights[i];
                map.put(participantWeights[i], map.get(participantWeights[i]) - 1);

                if (map.getOrDefault(i1, 0) > 0) {
                    ++t;
                    map.put(i1, map.get(i1) - 1);
                }
                else {
                    map.put(participantWeights[i], map.get(participantWeights[i]) + 1);
                }
            }

            finalAnswer = Math.max(finalAnswer, t);
        }

        out.println(finalAnswer);
    }

    public static Scanner sc;
    public static PrintWriter out;

    static {
        sc = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
        out = new PrintWriter(new BufferedOutputStream(System.out), true);

    }

    public static void main(String[] args) throws IOException {

        int testCases = sc.nextInt();

        for (int testCaseNo = 1; testCaseNo <= testCases; testCaseNo++) {
            int nLength = sc.nextInt();
            int[] niters = new int[nLength];

            for (int nIndex = 0; nIndex < niters.length; nIndex++) {
                niters[nIndex] = sc.nextInt();
            }

            new Main().solve(niters);
        }
    }
}