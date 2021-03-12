#include <iostream>
using namespace std;

int main()
{
	int i, odd = 0, even = 0, flag = 1;
	string str;
	cin >> str;
	
	for (i = str.size() - 1; i >= 0; i -= 2) {
		odd += str[i] - '0';
	}
	for (i = str.size() - 2; i >= 0; i -= 2) {
		even += str[i] - '0';
	}

	odd -= even;
	if (odd < 0)
		odd *= -1;

	cout << odd <<endl;
	return 0;
}
