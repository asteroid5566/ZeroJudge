// https://zerojudge.tw/ShowProblem?problemid=c350
#include <iostream>
using namespace std;

int main()
{
	int n, k, w, count;
	cin >> n >> k >> w;

	count = n;
	while (n >= k) {
		count += w;
		n = n - k + w;
	}
	cout << count << endl;
	return 0;
}
