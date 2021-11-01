// https://zerojudge.tw/ShowProblem?problemid=d124
import java.util.*;

public class d124 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		String str = new String();
		int i, sum;
		
		while (sc.hasNextLine()) {
			str = sc.nextLine();
			sum = 0;
			for (i = 0; i < str.length(); i++)
				sum += str.charAt(i) - '0';
			if (sum % 3 == 0)
				System.out.println("yes");
			else
				System.out.println("no");
		}
	}
}
