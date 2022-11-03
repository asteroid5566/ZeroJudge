// https://zerojudge.tw/ShowProblem?problemid=f929
#include <iostream>
#include <set>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	set<int> s;
	int n, i, op, temp, count;
	cin >> n;
	int arr[n];
	for (i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] == 0)
			s.insert(i);
	}
	
	cin >> count;
	while (count--) {
		cin >> op;
		if (op == 1) {
			cin >> temp;
			if (!s.empty()) {
				arr[*s.begin()] = temp;
				s.erase(*s.begin());
			}
		}
		else if (op == 2) {
			cin >> temp;
			arr[temp] = 0;
			s.insert(temp);
		}
		else {
			if (s.empty())
				cout << -1 << "\n";
			else
				cout << *s.begin() << "\n";
		}
	}
	return 0;
}
