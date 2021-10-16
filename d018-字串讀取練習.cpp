// https://zerojudge.tw/ShowProblem?problemid=d018
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	char discard;
	int n1;
	double n2, oddSum, evenSum;
	string str;
	stringstream ss1, ss2;

	while (getline(cin, str)) {
		oddSum = evenSum = 0;
		ss1.clear();
		ss1 << str;
		while (ss1 >> str) {
			ss2.clear();
			ss2 << str;
			ss2 >> n1 >> discard >> n2;

			if (n1 % 2 == 1)
				oddSum += n2;
			else
				evenSum += n2;
		}
		cout << oddSum - evenSum << endl;
	}
	return 0;
}
