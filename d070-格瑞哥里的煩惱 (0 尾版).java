// https://zerojudge.tw/ShowProblem?problemid=d070
import java.util.Scanner;

public class d070 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);	
		int n, i;
		
		while (true) {
			n = sc.nextInt();
			if (n == 0)
				break;
			if (n % 4 == 0 && (n % 100 != 0 || n % 400 == 0))
				System.out.println("a leap year");
			else
				System.out.println("a normal year");
		}
		sc.close();
	}
}
