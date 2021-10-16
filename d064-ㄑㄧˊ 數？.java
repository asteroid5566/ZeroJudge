// https://zerojudge.tw/ShowProblem?problemid=d064
import java.util.Scanner;

public class d064 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = Integer.parseInt(sc.next());
		
		if (n % 2 == 1)
			System.out.println("Odd\n");
		else
			System.out.println("Even\n");
		sc.close();
	}
}