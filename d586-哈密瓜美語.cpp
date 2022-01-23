// https://zerojudge.tw/ShowProblem?problemid=d586
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	string str, numToLetter = "mjqhofawcpnsexdkvgtzblryui", letterToNum = "uzrmatifxopnhwvbslekycqjgd";
	stringstream ss;
	int arr[26], n, m, i, sum;
	cin >> n;
	
	for (i = 0; i < 26; i++)
		arr[letterToNum[i] - 'a'] = i + 1;

	while (n--) {
		cin >> m;
		cin.ignore();
		getline(cin, str);
		ss.str("");
		ss.clear();
		ss << str;

		if (str[0] >= '0' && str[0] <= '9') {
			while (ss >> m)
				cout << numToLetter[m - 1];
			cout << endl;
		}
		else {
			sum = 0;
			for (i = 0; i < str.size(); i++) {
				if (str[i] != ' ')
					sum += arr[str[i] - 'a'];
			}
			cout << sum << endl;
		}
	}
	return 0;
}
