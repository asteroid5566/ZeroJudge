#include <iostream>
using namespace std;

int main()
{
	bool first = true;
	int i = 2, n, power;
	cin >> n;
	while (n > 1){
		if (n % i == 0){
			n /= i;
			power = 1;

			while (n % i == 0){
				n /= i;
				power++;
			}
			
			if (power > 1){
				if (first == true){
					cout << i << "^" << power;
					first = false; 
				}
				else
					cout << " * " << i << "^" << power;
			}
			else{
				if (first == true){
					cout << i;
					first = false;
				}
				else
					cout << " * " << i;
			}
			i++;
		}
		else{
			i++;
		}
	}
	return 0;
}
