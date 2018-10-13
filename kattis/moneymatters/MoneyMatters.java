// Kattis - moneymatters
// The sum of values at each node per connected component should equal zero
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class MoneyMatters {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt(), m = in.nextInt();
        ArrayList<ArrayList<Integer>> graph = new ArrayList<ArrayList<Integer>>(n);
        boolean[] visited = new boolean[n];
        int[] vals = new int[n];
        for (int i = 0; i < n; i++) {
            int value = in.nextInt();
            vals[i] = value;
            graph.add(new ArrayList<Integer>());
        }
        for (int i = 0; i < m; i++) {
            int from = in.nextInt(), to = in.nextInt();
            graph.get(from).add(to);
            graph.get(to).add(from);
        }
        in.close();
        boolean good = true;
        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                int result = bfs(i, graph, visited, vals);
                if (result != 0) {
                    good = false;
                    System.out.println("IMPOSSIBLE");
                    break;
                }
            }
        }
        if (good) {
            System.out.println("POSSIBLE");
        }
    }
    public static int bfs(int start, ArrayList<ArrayList<Integer>> graph, boolean[] visited, int[] vals) {
        int sum = 0;
        Queue<Integer> queue = new LinkedList<Integer>();
        queue.add(start);
        visited[start] = true;
        while (!queue.isEmpty()) {
            int item = queue.remove();
            sum += vals[item];
            for (int neighbor : graph.get(item)) {
                if (!visited[neighbor]) {
                    queue.add(neighbor);
                    visited[neighbor] = true;
                }
            }
        }
        return sum;
    }
}
