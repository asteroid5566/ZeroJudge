#include <iostream>
using namespace std;

struct Data {
	long dim;
	long value;
};

int main()
{
	Data arr[15000];
	long size = 0, d, v, sum = 0, i;
	char c;
	
	while (cin >> d) {
		if (d == 0) {
			cin >> c >> d;
			break;
		}
		cin >> c >> v;
		arr[size].dim = d;
		arr[size++].value = v;
	}
	
	while (cin >> d) {
		if (d == 0)
			break;
		cin >> c >> v;
		for (i = 0; i < size; i++) {
			if (arr[i].dim == d) {
				sum += arr[i].value * v;
				break;
			}
		}
	}
	cout << sum << endl;
	return 0;
}
