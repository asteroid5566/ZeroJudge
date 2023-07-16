// https://zerojudge.tw/ShowProblem?problemid=f327
#include <iostream>
using namespace std;

int main()
{
	int n1 = 0, n2 = 0, i;
	string s1, s2;
	cin >> s1 >> s2;
	
	for (i = 0; i < s1.size(); i++)
		n1 = n1 * 26 + s1[i] - 'A' + 1;
		
	for (i = 0; i < s2.size(); i++)
		n2 = n2 * 26 + s2[i] - 'A' + 1;
	
	cout << n2 - n1 + 1 << endl;
	return 0;
}
