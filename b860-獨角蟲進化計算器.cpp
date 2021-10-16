#include <iostream>
using namespace std;

int main()
{
	int count, candy, advance = 0;
	cin >> candy >> count;
	
	while (1) {
		if (candy >= 12 && count > 0) {
			candy -= 10;
			advance++;
			count--;
		}
		else {
			if (count > 1) {
				count--;
				candy++;
			}
			else
				break;
		}
	}
	cout << advance << endl;
	return 0;
}
