// https://zerojudge.tw/ShowProblem?problemid=f716
#include <iostream>
using namespace std;

int main()
{
	int grade, max = 0, min = 9999999;
	
	while (cin >> grade) {
		if (grade > max)
			max = grade;
		if (grade < min)
			min = grade;
	}
	
	cout << min << " " << max - min;
	return 0;
}
