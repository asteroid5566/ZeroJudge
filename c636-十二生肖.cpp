// https://zerojudge.tw/ShowProblem?problemid=c636
#include <iostream>
using namespace std;

int main()
{
	int n;
	
	// I use DEVC++ to write this program, if you use different IDE may encounter chinese encoding problem
	// If the words are garbled, please replace them with correct chinese words
	
	string arr[12] = {"½Þ", "¹«", "¤û", "ªê", "¨ß", "Às", "³D", "°¨", "¦Ï", "µU", "Âû", "ª¯"},          // from pig to dog
		arr2[12] = {"¹«", "½Þ", "ª¯", "Âû", "µU", "¦Ï", "°¨", "³D", "Às", "¨ß", "ªê", "¤û"};            // reverse order, from mouse back to ox

	while (cin >> n) {
		if (n >= 1)
			cout << arr[n % 12] << endl;
		else {
			n = -n;
			cout << arr2[n % 12] << endl;
		}
	}
	return 0;
}
