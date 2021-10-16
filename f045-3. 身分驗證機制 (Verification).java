// https://zerojudge.tw/ShowProblem?problemid=f045
import java.util.Scanner;

public class f045 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int i, max, sum = 0, index = 0;
		String str = sc.next();
		char tmp[] = new char[9];
		
		for (i = 0; i < 9; i++)
			tmp[i] = str.charAt(i);

		max = -1;
		for (i = 0; i < 9; i++) {
			if (tmp[i] - '0' > max) {
				max = tmp[i] - '0';
				index = i;
			}	
		}
		tmp[index] = '0' - 1;
		sum += max * max;
		
		max = -1;
		for (i = 0; i < 9; i++) {
			if (tmp[i] - '0' > max) {
				max = tmp[i] - '0';
				index = i;
			}	
		}
		tmp[index] = '0' - 1;
		sum += max * max;
		
		if (sum == (str.charAt(6) - '0') * 100 + (str.charAt(7) - '0') * 10 + (str.charAt(8) - '0'))
			System.out.println("Good Morning!\n");	
		else
			System.out.println("SPY!\n");
		sc.close();
	}
}