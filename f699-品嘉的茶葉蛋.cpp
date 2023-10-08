// https://zerojudge.tw/ShowProblem?problemid=f699
#include <iostream>
#include <queue>
using namespace std;

struct data {
	int step, y, x;
};

int main()
{
	queue<data> q;
	data d;
	int arr[100][100], n, m, i, j, flag = 0;
	cin >> n >> m;
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++)
			cin >> arr[i][j];
	}
	
	d.step = d.y = d.x = 0;
	q.push(d);
	
	while (!q.empty()) {
		d = q.front();
		q.pop();
		if (d.y < 0 || d.x < 0 || d.y >= n || d.x >= m || arr[d.y][d.x] == 2)
			continue;
	
		if (arr[d.y][d.x] == 1) {
			cout << d.step << endl;
			flag = 1;
		}
		
		arr[d.y][d.x] = 2;
		
		q.push({d.step + 1, d.y - 1, d.x});
		q.push({d.step + 1, d.y, d.x + 1});
		q.push({d.step + 1, d.y + 1, d.x});
		q.push({d.step + 1, d.y, d.x - 1});
	}
	
	if (!flag)
		cout << "¹Åªo¡I";
	
	return 0;
}
