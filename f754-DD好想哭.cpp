// https://zerojudge.tw/ShowProblem?problemid=f754
#include <iostream>
using namespace std;

int main()
{
	long long n, m, k, i, j;
	cin >> n;
	
	for (i = 1; i <= n; i++) {
		cin >> m >> k;
		cout << "Case " << i << " :\n";
		for (j = 1; j < k; j++)
			cout << "��" << j << "�� : ��" << m / k << "���û�DD! BAD!\n";
		cout << "��" << k << "�� : ��" << m / k + m % k << "���û�DD! BAD!\n";
	}
	return 0;
}
