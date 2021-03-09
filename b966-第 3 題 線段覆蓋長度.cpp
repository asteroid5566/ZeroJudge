#include <iostream>
#include <algorithm>
using namespace std;

int cmp(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}

int main()
{
	int n, i, j, count, min, index, temp, start, end;
	
	cin >> n;
	int arr[n][2];
	for (i = 0; i < n; i++) {
		cin >> arr[i][0] >> arr[i][1];
	}
	qsort(arr, n, sizeof(arr[0]), cmp);
	
	start = arr[0][0];
	end = arr[0][1];
	count = 0;
	
	for (i = 1; i < n; i++) {
		if (arr[i][1] <= start)
			continue;
		if (arr[i][0] >= end) {
			count += end - start;
			start = arr[i][0];
			end = arr[i][1];
		}
		if (arr[i][0] < end && end < arr[i][1]) {
			end = arr[i][1];
		}
	}
	count += end - start;
	cout << count << endl;

	return 0;
}
