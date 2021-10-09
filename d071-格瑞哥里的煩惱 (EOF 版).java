// https://zerojudge.tw/ShowProblem?problemid=d071
import java.util.Scanner;

public class d071 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int y;
		
		while (sc.hasNextInt()) {
			y = sc.nextInt();
			if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
				System.out.println("a leap year");
			else
				System.out.println("a normal year");
		}
		
		sc.close();
	}
}
