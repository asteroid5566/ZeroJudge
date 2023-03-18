// https://zerojudge.tw/ShowProblem?problemid=f147
#include <iostream>
using namespace std;

int main()
{
	string s1[5] = {"Medium Wac", "WChicken Nugget", "Geez Burger", "ButtMilk Crispy Chicken", "Plastic Toy"}
		, s2[4] = {"German Fries", "Durian Slices", "WcFurry", "Chocolate Sunday"};
	int p1[5] = {4, 8, 7, 6, 3}, p2[4] = {2, 3, 5, 7}, op, order, sum = 0;
	
	while (cin >> op) {
		if (op == 0) {
			cout << "Total: " << sum << endl;
			break;
		}
		else if (op == 1) {
			cin >> order;
			sum += p1[order - 1];
			cout << s1[order - 1] << " " << p1[order - 1] << endl;
		}
		else if (op == 2) {
			cin >> order;
			sum += p2[order - 1];
			cout << s2[order - 1] << " " << p2[order - 1] << endl;
		}
	}	
	return 0;
}
