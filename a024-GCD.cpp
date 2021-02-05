#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	cin >> n1 >> n2;
	
	while (1){
		if (n1 == n2){
			cout << n1;
			break;
		}
		else if (n1 == 1){
			cout << n1;
			break;
		}
		else if(n2 == 1){
			cout << n2;
			break;
		}
		else if(n1 > n2){
			if (n1 % n2 == 0){
				cout << n2;
				break;
			}
			n1 %= n2;
		}
		else if(n2 > n1){
			if (n2 % n1 == 0){
				cout << n1;
				break;
			}
			n2 %= n1;
		}
	}
	return 0;
}
