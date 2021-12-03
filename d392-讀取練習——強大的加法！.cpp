// https://zerojudge.tw/ShowProblem?problemid=d392
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	long long sum, temp;
	string str;
	stringstream ss;
	
	while (getline(cin, str)) {
		sum = 0;
		ss.clear();
		ss.str("");
		ss << str;
		while (ss >> temp)
			sum += temp;
		cout << sum << endl;
	}
	
	return 0;
}
