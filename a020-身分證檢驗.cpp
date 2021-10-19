// https://zerojudge.tw/ShowProblem?problemid=a020
#include <iostream>
using namespace std;

int main()
{
	char str[10];
	int sum = 0, temp;
	cin >> str;
	
	if (str[0] == 'I')
		temp = 34;
	else if(str[0] == 'O')
		temp = 35;
	else if(str[0] == 'W')
		temp = 32;
	else if(str[0] == 'X')
		temp = 30;
	else if(str[0] == 'Y')
		temp = 31;
	else if(str[0] == 'Z')
		temp = 33;
	else if(str[0] <= 'H')				//A ~ H
		temp = str[0] - 'A' + 10;
	else if(str[0] <= 'N')				//J ~ N
		temp = str[0] - 'J' + 18;
	else								//P ~ V
		temp = str[0] - 'P' + 23;

	sum += temp / 10 + (temp % 10) * 9;

	for (int i = 1; i <= 8; i++)
		sum += (str[i] - '0') * (9 - i);
	
	sum += str[9] - '0';
	
	if (sum % 10 == 0)
		cout << "real";
	else
		cout << "fake";
	
	return 0;
}
