// https://zerojudge.tw/ShowProblem?problemid=a130
#include <iostream>
using namespace std;

int main()
{
	int data, rel, i, j, max, index;
	string web, ans[10];
	cin >> data;
	
	for (i = 1; i <= data; i++) {
		max = index = 0;
		for (j = 0; j < 10; j++) {
			cin >> web >> rel;
			if (rel > max) {
				index = 1;
				ans[0] = web;
				max = rel;
			}
			else if (rel == max)
				ans[index++] = web;
		}
		cout << "Case #" << i << ":\n";
		for (j = 0; j < index; j++)
			cout << ans[j] << endl;
	}
	return 0;
}
