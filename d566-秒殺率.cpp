// https://zerojudge.tw/ShowProblem?problemid=d566
#include <iostream>
using namespace std;

struct User {
	string name;
	string result;
};

int main()
{
	int n, i, j, index = 0;
	double ac = 0, first = 0;   //ac: normal AC
	string name, result;
	cin >> n;
	User arr[n];
	
	for (i = 0; i < n; i++) {
		cin >> name >> result;
		for (j = 0; j < index; j++) {
			if (arr[j].name == name) {
				if (arr[j].result == "AC" && result != "AC") {
					first--;
					ac++;
					arr[j].result = result;
				}
				else if (arr[j].result != "AC" && result == "AC") {
					first++;
					ac--;
					arr[j].result = result;
				}
				goto esc;
			}
		}
		if (j == index && result == "AC") {
			arr[index].name = name;
			arr[index].result = result;
			first++;
			index++;
		}
		esc:;
	}
	cout << (first / (ac + first)) * 100 << "%\n";
	return 0;
}
