// https://zerojudge.tw/ShowProblem?problemid=d069
import java.util.Scanner;

public class d067 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);	
		int n, i, t = sc.nextInt();
		
		for (i = 0; i < t; i++) {
			n = sc.nextInt();
			if (n % 4 == 0 && (n % 100 != 0 || n % 400 == 0))
				System.out.println("a leap year");
			else
				System.out.println("a normal year");
		}
		
		sc.close();
	}
}
