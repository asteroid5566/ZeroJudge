// https://zerojudge.tw/ShowProblem?problemid=c807
#include <iostream>
#include <set>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, c, x, l, r;
	set<int> s;
	set<int>::iterator it, it2;
	
	cin >> n;
	while (n--) {
		cin >> c;

		if (c == 1) {
			cin >> x;
			s.insert(x);
		}
		else {
			cin >> l >> r;
			it = s.lower_bound(l);
			it2 = s.lower_bound(r);
			if (it != s.end() && *it2 == r)
				it2++;
			s.erase(it, it2);
		}

		if (s.empty())
			cout << "0";
		else if (s.size() == 1)
			cout << "1 " << *s.begin();
		else {
			it = s.end();
			cout << "2 " << *s.begin() << " " << *(--it);
		}
		cout << '\n';
	}
	return 0;
}
