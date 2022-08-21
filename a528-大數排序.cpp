// https://zerojudge.tw/ShowProblem?problemid=a528
#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(string s1, string s2)
{
	if (s1[0] != '-' && s2[0] != '-') {
		if (s1.size() == s2.size())
			return s1 < s2;
		else
			return s1.size() < s2.size();
	}
	else if (s1[0] == '-' && s2[0] == '-') {
		if (s1.size() == s2.size())
			return s1 > s2;
		else
			return s1.size() > s2.size();
	}
	else
		return s1 < s2;
}

int main()
{
	int n, i;
	
	while (cin >> n) {
		string arr[n];
		
		for (i = 0; i < n; i++)
			cin >> arr[i];
		
		sort(arr, arr + n, cmp);
		
		for (i = 0; i < n; i++)
			cout << arr[i] << endl;
	}
	return 0;
}
