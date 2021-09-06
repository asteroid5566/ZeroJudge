// https://zerojudge.tw/ShowProblem?problemid=c636
#include <iostream>
using namespace std;

int main()
{
	int n;
	string arr[12] = {"½Þ", "¹«", "¤û", "ªê", "¨ß", "Às", "³D", "°¨", "¦Ï", "µU", "Âû", "ª¯"},
		arr2[12] = {"¹«", "½Þ", "ª¯", "Âû", "µU", "¦Ï", "°¨", "³D", "Às", "¨ß", "ªê", "¤û"};
	while (cin >> n) {
		if (n >= 1) {
			cout << arr[n % 12] << endl;
		}
		else {
			n = -n;
			cout << arr2[n % 12] << endl;
		}
	}
	return 0;
}
