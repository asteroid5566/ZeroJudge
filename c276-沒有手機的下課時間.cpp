#include <iostream>
using namespace std;

int main()
{
	int temp, n, arr[4], guess[4], a, b, i, j;

	cin >> temp;
	for (i = 0; i < 4; i++) {
		arr[3 - i] = temp % 10;
		temp /= 10;
	}

	cin >> n;
	while (n--) {
		a = b = 0;
		cin >> temp;
		for (i = 0; i < 4; i++) {
			guess[3 - i] = temp % 10;
			temp /= 10;
		}
		
		for (i = 0; i < 4; i++) {
			if (guess[i] == arr[i])
				a++;
			else {
				for (j = 0; j < 4; j++) {
					if (guess[j] == arr[i])
						b++;
				}
			}
		}
		cout << a << "A" << b << "B" << endl;
	}
	
	return 0;
}
