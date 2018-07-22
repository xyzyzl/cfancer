// Reordering the array: greedy

import java.util.*;

public class CF1007A {
	private static int n, mx;
	private static HashMap<Integer, Integer> mp;

	@SuppressWarnings({ "unchecked", "rawtypes" })
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		mp = new HashMap();
		n = sc.nextInt();
		for (int i = 0; i < n; i++) {
			int k = sc.nextInt();
			if (!mp.containsKey(k))
				mp.put(k, 0);
			else {
				int j = mp.get(k);
				mp.remove(k);
				mp.put(k, j + 1);
				mx = Math.max(j + 1, mx);
			}
		}
		sc.close();
		mx++;
		n = n - mx;
		System.out.println(n);
	}
}
