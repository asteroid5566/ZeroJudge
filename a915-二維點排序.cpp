#include <iostream>
#include <algorithm>
using namespace std;

struct Data {
	int x;
	int y;
};

bool cmp(Data a, Data b)
{
	if (a.x == b.x)
		return a.y < b.y;
	else
		return a.x < b.x;
}

int main()
{
	int n, i;
	cin >> n;
	Data arr[n];
	
	for (i = 0; i < n; i++)
		cin >> arr[i].x >> arr[i].y;
	
	sort(arr, arr + n, cmp);
	
	for (i = 0; i < n; i++)
		cout << arr[i].x << " " << arr[i].y << endl;
	
	return 0;
}
