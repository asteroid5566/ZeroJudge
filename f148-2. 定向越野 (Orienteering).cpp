// https://zerojudge.tw/ShowProblem?problemid=f148
#include <iostream>
#include <algorithm>
using namespace std;

struct coord {
	int num, y, x;
};

bool cmp(coord a, coord b)
{
	return a.num < b.num;
}

int main()
{
	int w, h, req, i, j, count = 0;
	char c;
	coord arr[26];
	cin >> w >> h >> req;
	
	for (i = 0; i < w; i++) {
		for (j = 0; j < h; j++) {
			cin >> c;
			if (c != '0') {
				arr[count].num = c - 'a';
				arr[count].y = i;
				arr[count].x = j;
				count++;
			}
		}
	}
	
	if (req > count)
		cout << "Mission fail.\n";
	else {
		sort(arr, arr + count, cmp);
		for (i = 0; i < req; i++)
			cout << arr[i].y << " " << arr[i].x << endl;
	}
	return 0;
}
