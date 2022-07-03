// https://zerojudge.tw/ShowProblem?problemid=a743
#include <iostream>
#include <map>
using namespace std;

int main()
{
	int n;
	map<string, int> m;
	string str, temp;
	cin >> n;
	
	while (n--) {
		cin >> str >> temp >> temp;
		m[str]++;
	}
	
	auto it = m.begin();
	while (it != m.end()) {
		cout << it->first << " " << it->second << endl;
		it++;
	}
	return 0;
}
