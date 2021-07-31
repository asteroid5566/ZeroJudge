#include <iostream>
using namespace std;

int main()
{
	int n, arr[100000], index = 0, order;
	cin >> n;

	while (n--) {
		cin >> order;
		if (order == 1) {
			index--;
		}
		else if (order == 2) {
			cout << arr[index] << endl;
		}
		else if (order == 3) {
			cin >> arr[++index];
		}
	}
	return 0;
}
