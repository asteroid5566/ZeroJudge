// https://zerojudge.tw/ShowProblem?problemid=d086
import java.util.*;

public class d086 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		String str = new String();
		int sum;
		boolean flag;
		
		while (sc.hasNext()) {
			str = sc.next();
			sum = 0;
			flag = true;
			
			if (str.charAt(0) == '0' && str.length() == 1)
				break;
			
			loop:
			for (int i = 0; i < str.length(); i++) {
				if (str.charAt(i) >= 'a' && str.charAt(i) <= 'z')
					sum += str.charAt(i) - 'a' + 1;
				else if (str.charAt(i) >= 'A' && str.charAt(i) <= 'Z')
					sum += str.charAt(i) - 'A' + 1;
				else {
					System.out.println("Fail");
					flag = false;
					break loop;
				}
			}
			if (flag)
				System.out.println(sum);
		}
		sc.close();
	}
}
