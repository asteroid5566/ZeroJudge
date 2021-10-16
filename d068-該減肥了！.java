// https://zerojudge.tw/ShowProblem?problemid=d068
import java.util.Scanner;

public class d068 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		n = n > 50 ? n - 1 : n;
		System.out.println(n);
		sc.close();
	}
}
