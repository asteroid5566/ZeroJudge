// https://zerojudge.tw/ShowProblem?problemid=d710
#include <iostream>
using namespace std;

struct CAR {
	string brand, color;
};

int main()
{
	int n, m, i, j;
	string type, target;
	
	while (cin >> n >> m) {
		CAR arr[n];
		for (i = 0; i < n; i++)
			cin >> arr[i].brand >> arr[i].color;

		for (i = 0; i < m; i++) {
			cin >> type >> target;
			
			if (type == "brand") {
				for (j = 0; j < n; j++) {
					if (arr[j].brand == target)
						cout << arr[j].brand << " " << arr[j].color << endl;
				}
			}
			else {
				for (j = 0; j < n; j++) {
					if (arr[j].color == target)
						cout << arr[j].brand << " " << arr[j].color << endl;
				}
			}
		}
	}
	return 0;
}
