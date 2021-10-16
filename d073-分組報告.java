// https://zerojudge.tw/ShowProblem?problemid=d073
// forbid if-statement
import java.util.Scanner;

public class d073 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		n = n > n / 3 * 3 ? n / 3 + 1 : n / 3; 
		System.out.println(n);
		sc.close();
	}
}
