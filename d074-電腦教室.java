// https://zerojudge.tw/ShowProblem?problemid=d074
import java.util.*;

public class d074 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt(), max = -1, temp;
		for (int i = 0; i < n; i++) {
			temp = sc.nextInt();
			if (temp > max)
				max = temp;
		}
		System.out.println(max);
		sc.close();
	}
}
