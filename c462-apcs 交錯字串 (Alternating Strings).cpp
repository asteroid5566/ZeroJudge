#include <iostream>
using namespace std;

int main()
{
	int k, a, b, c, count, sum = 0, maxSum = 0, caseFlag, flag;		//caseflag = 0 ¬°¤p¼g
	string str;
	cin >> k >> str;
	
	for (a = 0; a < str.size(); a++) {
		if (str[a] >= 'A' && str[a] <= 'Z') {
			caseFlag = 1;
		}
		else if (str[a] >= 'a' && str[a] <= 'z') {
			caseFlag = 0;
		}
		
		sum = 0;
		for (b = a; b <= str.size() - k; b += k) {
			flag = 1;
			for (c = b; c < b + k; c++) {
				if (caseFlag && (str[c] >= 'a' && str[c] <= 'z') || !caseFlag && (str[c] >= 'A' && str[c] <= 'Z'))
					flag = 0;
			}
			
			if (flag) {
				sum += k;
				if (sum > maxSum)
					maxSum = sum;
				
				if (caseFlag)
					caseFlag = 0;
				else
					caseFlag = 1;
			}
			else {
				if (sum > maxSum)
					maxSum = sum;
				break;
			}
		}	
	}
	
	cout << maxSum << endl;
	return 0;
}
