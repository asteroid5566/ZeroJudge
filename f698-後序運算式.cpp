// https://zerojudge.tw/ShowProblem?problemid=f698
#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<int> s;
	int i, a, b;
	string str;

	while (cin >> str) {
		if (str == "+") {
			a = s.top();
			s.pop();
			b = s.top();
			s.pop();
			s.push(a + b);
		}
		else if (str == "-") {
			a = s.top();
			s.pop();
			b = s.top();
			s.pop();
			s.push(b - a);
		}
		else if (str == "*") {
			a = s.top();
			s.pop();
			b = s.top();
			s.pop();
			s.push(a * b);
		}
		else if (str == "/") {
			a = s.top();
			s.pop();
			b = s.top();
			s.pop();
			s.push(b / a);
		}
		else
			s.push(atoi(str.c_str()));
	}
	cout << s.top();
	return 0;
}
