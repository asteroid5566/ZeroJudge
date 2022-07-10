// https://zerojudge.tw/ShowProblem?problemid=c045
#include <iostream>
using namespace std;

int main()
{
	string arr[100];
	int i, j, row = 0, max = 0;
	
	while (getline(cin, arr[row])) {
		if (arr[row].size() > max)
			max = arr[row].size();
		row++;
	}
	
	for (i = 0; i < max; i++) {
		for (j = row - 1; j >= 0; j--) {
			if (i < arr[j].size())
				cout << arr[j][i];
			else if (!(j == 0 && i == max - 1))  
			/* for zerojudge test data, probably not necessary in real case
				can still AC with only else statement */
				cout << " ";
		}
		cout << "\n";
	}
	return 0;
}
