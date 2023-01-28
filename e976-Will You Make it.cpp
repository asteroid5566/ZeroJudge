// https://zerojudge.tw/ShowProblem?problemid=e970
#include <iostream>
using namespace std;

int main()
{
	int h, m ,s;
	
	while (cin >> h >> m >> s) {
		if (h * s >= m)
			cout << h << " " << m << " " << s << ". I will make it!\n";
		else
			cout << h << " " << m << " " << s << ". I will be late!\n";
	}
	return 0;
}
