// https://zerojudge.tw/ShowProblem?problemid=c044
#include <iostream>
#include <algorithm>
using namespace std;

struct DATA {
	char c;
	int count;
};

bool cmp(DATA a, DATA b)
{
	if (a.count != b.count)
		return a.count > b.count;
	else
		return a.c < b.c;
}

int main()
{
	int n, i;
	string s;
	DATA arr[26];
	cin >> n;
	cin.ignore();
	
	for (i = 0; i < 26; i++) {
		arr[i].c = i + 'A';
		arr[i].count = 0;
	}
	
	while (n--) {
		getline(cin, s);
		
		for (i = 0; i < s.size(); i++) {
			if (s[i] >= 'A' && s[i] <= 'Z')
				arr[s[i] - 'A'].count++;
			else if (s[i] >= 'a' && s[i] <= 'z')
				arr[s[i] - 'a'].count++;
		}
	}
	
	sort(arr, arr + 26, cmp);

	for (i = 0; i < 26; i++) {
		if (!arr[i].count)
			break;
		cout << arr[i].c << " " << arr[i].count << "\n";
	}
	return 0;
}
