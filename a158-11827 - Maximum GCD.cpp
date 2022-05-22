// https://zerojudge.tw/ShowProblem?problemid=a158
#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int gcd(int x, int y)
{
	if (y == 0)
		return x;
	else
		return gcd(y, x % y);
}

int main()
{
	int n, m, num, i, j, max;
	string str;
	stringstream ss;
	vector<int> v;
	cin >> n;
	cin.ignore();
	
	while (n--) {
		ss.clear();
		ss.str("");
		v.clear();
		getline(cin, str);
		ss << str;
		max = 1;
		
		while (ss >> num)
			v.push_back(num);

		for (i = 0; i < v.size(); i++) {
			for (j = 0; j < v.size(); j++) {
				if (i == j)
					continue;

				if (gcd(v[i], v[j]) > max)
					max = gcd(v[i], v[j]);
			}
		}

		cout << max << endl;
	}
	return 0;
}
