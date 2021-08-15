// https://zerojudge.tw/ShowProblem?problemid=c296
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m, k, bomb, i, j;
	cin >> n >> m >> k;
	vector<int> v;
	
	for (i = 1; i <= n; i++)
		v.push_back(i);

	bomb = 0;
	while (k--) {
		bomb = (bomb + m - 1) % v.size();
		v.erase(v.begin() + bomb);
		if (bomb == v.size())
			bomb = 0;
	}
	
	cout << v[bomb] << endl;
	return 0;
}
