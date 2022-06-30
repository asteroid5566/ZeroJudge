// https://zerojudge.tw/ShowProblem?problemid=c039
#include <iostream>
using namespace std;

int arr[1000000];

int main()
{
	int a, b, i, length, current, max;

	arr[1] = 1;
	for (i = 2; i < 1000000; i++) {
		if (i % 2)
			arr[i] = 3 * i + 1;
		else
			arr[i] = i / 2;
	}
	
	while (cin >> a >> b) {
		max = 1;
		cout << a << " " << b << " ";

		if (a > b) {
			i = a;
			a = b;
			b = i;
		}

		for (i = a; i <= b; i++) {
			length = 1;
			current = i;
			while (current != 1) {
				if (current >= 1000000) {
					if (current % 2)
						current = current * 3 + 1;
					else
						current /= 2;
				}
				else
					current = arr[current];
				length++;
			}
			if (length > max)
				max = length;
		}
		cout << max << "\n";
	}
	return 0;
}
