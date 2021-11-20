// https://zerojudge.tw/ShowProblem?problemid=d244
#include <iostream>
#include <vector>
using namespace std;

struct DATA {
	int n;
	int count;
};

int main()
{
	vector<DATA> v;
	DATA obj = {0, 1};
	int n, i, flag;
	
	while (cin >> n) {
		flag = 0;
		for (i = 0; i < v.size(); i++) {
			if (v[i].n == n) {
				flag = 1;
				v[i].count++;
				break;
			}
		}
		if (!flag) {
			obj.n = n;
			v.push_back(obj);
		}
	}
		
	for (i = 0; i < v.size(); i++) {
		if (v[i].count % 3 != 0) {
			cout << v[i].n << endl;
			break;
		}
	}
	return 0;
}

