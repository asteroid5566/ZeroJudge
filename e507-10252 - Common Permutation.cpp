// https://zerojudge.tw/ShowProblem?problemid=e507
#include <iostream>
using namespace std;

int main()
{
	int arr1[26], arr2[26], i, j;
	string a, b, ans;
	
	while (cin >> a >> b) {
		for (i = 0; i < 26; i++)
			arr1[i] = arr2[i] = 0;
		for (i = 0; i < a.size(); i++)
			arr1[a[i] - 'a']++;
		for (i = 0; i < b.size(); i++)
			arr2[b[i] - 'a']++;

		ans = "";
		for (i = 0; i < 26; i++) {
			for (j = 0; j < arr1[i] && j < arr2[i]; j++)
				ans += 'a' + i;
		}
		cout << ans << "\n";
	}
	return 0;
}
