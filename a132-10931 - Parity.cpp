// https://zerojudge.tw/ShowProblem?problemid=a132
#include <iostream>
using namespace std;

int main()
{
	int n, sum, i;
	string bin;
	
	while (cin >> n && n) {
		sum = 0;
		bin = "";
		
		while (n) {
			i = n % 2;
			sum += i;
			bin += (char)(i + '0');
			n /= 2;
		}
		
		cout << "The parity of ";
		for (i = bin.size() - 1; i >= 0; i--)
			cout << bin[i]; 
		cout << " is " << sum << " (mod 2)." << endl;
	}
	return 0;
}
