// https://zerojudge.tw/ShowProblem?problemid=d326
#include <iostream>
using namespace std;

int main()
{
	int arr[32], v, a, b, i, comp;
	
	while (cin >> v >> a >> b) {
		if (v < 0) {
			comp = 1;
			v *= -1;
		}
		else
			comp = 0;
			
		for (i = 0; i < 32; i++) {
			arr[i] = v % 2;
			v /= 2;
		}
		
		if (comp) {
			for (i = 0; i < 32; i++)
				arr[i] = arr[i] == 1 ? 0 : 1;
			arr[0] += 1;
			i = 0;
			while (arr[i] > 1) {
				arr[i] -= 2;
				arr[i + 1]++;
				if (++i >= 32)
					break;
			}
		}
		
		arr[a] = b;
		
		for (i = 31; i >= 0; i--)
			cout << arr[i];
		cout << endl;
	}
	return 0;
}
