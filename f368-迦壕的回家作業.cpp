// https://zerojudge.tw/ShowProblem?problemid=f368
#include <iostream>
#include <memory.h>
using namespace std;

int arr[1000];

void power(int count)
{
	int i, j, size = 1, carry = 0;
	memset(arr, 0, sizeof(arr));
	arr[0] = 1;

	for (i = 0; i < count; i++) {
		for (j = 0; j < size; j++) {
			arr[j] = arr[j] * 2 + carry;
			carry = arr[j] / 10;
			arr[j] %= 10;
		}
		
		while (carry) {
			arr[size] = carry % 10;
			carry = arr[size] / 10;
			size++;
		}
	}
	
	for (i = size - 1; i >= 0; i--)
		cout << arr[i];
}

int main()
{
	int i, j, count;
	string s;
	
	while (cin >> s) {
		count = 0;
		
		for (i = 0; i < s.size(); i++) {
			if (i + 2 < s.size() && s[i] == 'R' && s[i + 1] == 'E' && s[i + 2] == 'D') {
				count++;
				i += 2;
			}
			else if (i + 4 < s.size() && s[i] == 'G' && s[i + 1] == 'R' && s[i + 2] == 'E' && s[i + 3] == 'E' && s[i + 4] == 'N') {
				count++;
				i += 4;
			}
		}
		
		cout << "1/";
		power(count);
		cout << "\n";
	}
	
	return 0;
}
