#include <iostream>
#include <vector>
#include <memory.h>
using namespace std;

int main()
{
	int arr[30001], n, i, temp, max = 1;
	vector<int> v;
	memset(arr, 0, sizeof(arr));
	cin >> n;
	
	while (n--) {
		cin >> temp;
		arr[temp]++;
	}
	
	for (i = 1; i <= 30000; i++) {
		if (arr[i] == max)
			v.push_back(i);
		else if (arr[i] > max) {
			v.clear();
			v.push_back(i);
			max = arr[i];
		}
	}
	
	for (i = 0; i < v.size(); i++)
		cout << v[i] << " " << arr[v[i]] << endl;

	return 0;
}
