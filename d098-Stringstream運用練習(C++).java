// https://zerojudge.tw/ShowProblem?problemid=d098
import java.util.*;

public class d098 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String str = new String();
		int i, temp = 0, sum;
		
		while (sc.hasNextLine()) {
			str = sc.nextLine();
			sum = 0;
			
			for (i = 0; i < str.length(); i++) {
				temp = 0;
				while (true) {
					if (i >= str.length())
						break;
					if (str.charAt(i) >= '0' && str.charAt(i) <= '9') {
						temp = temp * 10 + str.charAt(i) - '0';
						if (i == str.length() - 1) {
							sum += temp;
							break;
						}
						i++;
					}
					else if (str.charAt(i) == ' ') {
						sum += temp;
						break;
					}
					else {
						while (str.charAt(i) != ' ') {
							i++;
							if (i >= str.length())
								break;
						}
						break;
					}	
				}
			}
			System.out.println(sum);
		}
	}
}
