#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	if (n <= 10){
		cout << n * 6;
	}
	else if(n <= 20){
		cout << 60 + (n - 10) * 2;
	}
	else if(n <= 40){
		cout << 60 + 20 + n - 20;
	}
	else if(n > 40){
		cout << 100;
	}

	return 0;
}
