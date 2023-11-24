// https://zerojudge.tw/ShowProblem?problemid=f787
#include <iostream>
#include <vector>
using namespace std;

struct PLAYER {
	string name;
	int hp, dmg, next, flag;
	vector<string> v;
};

int main()
{
	int n, s, i, j;
	cin >> n >> s;
	string item;
	PLAYER arr[n + 1];
	
	for (i = 1; i <= n; i++) {
		cin >> arr[i].name >> arr[i].hp >> arr[i].dmg;
		
		for (j = 0; j < arr[i].hp; j++) {
			cin >> item;
			arr[i].v.push_back(item);
		}
		
		cin >> arr[i].next;
		arr[i].flag = 0;
	}
	
	while (1) {
		if (arr[s].flag)
			break;
		
		arr[s].hp -= arr[s].dmg;
		arr[s].flag = 1;
		if (arr[s].hp <= 0)
			cout << arr[s].name << " dead.\n";
		else {
			cout << arr[s].name << " " << arr[s].hp;
			for (i = 0; i < arr[s].hp; i++)
				cout << " " << arr[s].v[i];
			cout << "\n";
		}
		s = arr[s].next;
	}
	return 0;
}
