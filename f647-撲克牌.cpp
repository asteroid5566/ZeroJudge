// https://zerojudge.tw/ShowProblem?problemid=f647
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	string poker[52]={"SA", "S2", "S3", "S4", "S5", "S6", "S7", "S8", "S9", "S10", "SJ",
		"SQ", "SK", "HA", "H2", "H3", "H4", "H5", "H6", "H7", "H8", "H9", "H10", "HJ", "HQ",
		"HK", "DA", "D2", "D3", "D4", "D5", "D6", "D7", "D8", "D9", "D10", "DJ", "DQ", "DK",
	    "FA", "F2", "F3", "F4", "F5", "F6", "F7", "F8", "F9", "F10", "FJ", "FQ", "FK"};
	int n, t, a, b, k, i, tmp;
	vector<int> v, v2;
	cin >> n;
	
	for (i = 0; i < 52; i++)
		v.push_back(i);
	
	while (n--) {
		cin >> t;
		
		if (t == 1) {
			cin >> a >> b;
			v2.clear();
			for (i = 0; i <= b - a; i++) {
				tmp = v[a - 1];
				v.erase(v.begin() + a - 1);
				v2.push_back(tmp);
			}
			for (i = v2.size() - 1; i >= 0; i--)
				v.insert(v.begin(), v2[i]);
		}	
		else if (t == 2) {
			cin >> a >> b;
			v2.clear();
			for (i = 0; i <= b - a; i++) {
				tmp = v[a - 1];
				v.erase(v.begin() + a - 1);
				v2.push_back(tmp);
			}
			for (i = 0; i < v2.size(); i++)
				v.push_back(v2[i]);
		}
		else if (t == 3) {
			cin >> k;
			for (i = 0; i < k; i++) {
				tmp = v[51];
				v.pop_back();
				v.insert(v.begin(), tmp);
			}
		}
		else {
			cin >> k;
			for (i = 0; i < k; i++) {
				tmp = v[0];
				v.erase(v.begin());
				v.push_back(tmp);
			}
		}
	}
	for (i = 0; i < 5; i++)
		cout << poker[v[i]] << " ";
	
	return 0;
}
