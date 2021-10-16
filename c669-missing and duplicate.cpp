// https://zerojudge.tw/ShowProblem?problemid=c669
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
	int t, i, count, repeat, missing, d, a, b, countA, countB;
	string str;
	stringstream ss;
	
	cin >> t;
	cin.ignore();
	
	while (t--) {
		getline(cin, str);
		ss.clear();
		ss << str;
		count = 0;
		for (i = 0; i < str.size(); i++) {
			if (str[i] == ' ')
				count++;
		}
		int arr[count + 1];
		for (i = 0; i <= count; i++)
			ss >> arr[i];

		sort(arr, arr + count + 1);
		
		for (i = 0; i < count; i++)
			if (arr[i] == arr[i + 1]) {
				repeat = arr[i];
				arr[i] = -9999999;
				break;
			}

		sort(arr, arr + count + 1);
		
		countA = countB = 0;
		a = arr[2] - arr[1];
		b = arr[count] - arr[count - 1];
		if (arr[3] - arr[2] == a)
			countA++;
		else
			countB++;
		if (arr[count - 1] - arr[count - 2] == a)
			countA++;
		else
			countB++;

		d = countA > countB ? a : b;
		
		for (i = 1; i < count; i++) {
			if (arr[i + 1] != arr[i] + d) {
				missing = arr[i] + d;
				break;
			}
		}
		
		cout << missing << " " << repeat << endl;
	}
	return 0;
}
