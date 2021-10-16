// https://zerojudge.tw/ShowProblem?problemid=d066
import java.util.Scanner;

public class d066 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int h = sc.nextInt(), m = sc.nextInt();
		
		if (h == 7 && m >= 30 || h >= 8 && h < 17)
			System.out.println("At School");
		else
			System.out.println("Off School");
		
		sc.close();
	}
}
