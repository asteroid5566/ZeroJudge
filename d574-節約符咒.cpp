// https://zerojudge.tw/ShowProblem?problemid=d574
#include <iostream>
using namespace std;
int arr[6000000][2];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int i, j, n, count, idx , length;
	string str;
	
	while (cin >> n >> str) {
		count = 1;
		idx = 0;
		for (i = 0; i < n; i++) {
			if (i + 1 < n && str[i] == str[i + 1]) {
				count++;
			}
			else {
				arr[idx][0] = str[i];
				arr[idx][1] = count;
				idx++;
				count = 1;
			}
		}
		
		length = idx;
		
		for (i = 0; i < idx; i++)
			length += to_string(arr[i][1]).size();
		
		if (length >= str.size())
			cout << str << '\n';
		else {
			for (i = 0; i < idx; i++)
				cout << arr[i][1] << char(arr[i][0]);
			cout << '\n';
		}
	}
	return 0;
}
