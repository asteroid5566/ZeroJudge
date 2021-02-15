#include <iostream>
using namespace std;

int letter(char c)
{
	if (c == 'I'){
		return 34;
	}
	else if(c == 'O'){
		return 35;
	}
	else if(c == 'W'){
		return 32;
	}
	else if(c == 'X'){
		return 30;
	}
	else if(c == 'Y'){
		return 31;
	}
	else if(c == 'Z'){
		return 33;
	}
	else if(c <= 'H'){				//A ~ H
		return c - 'A' + 10;
	}
	else if(c <= 'N'){				//J ~ N
		return c - 'J' + 18;
	}
	else{								//P ~ V
		return c - 'P' + 23;
	}
}

int main()
{
	int sum = 0, temp;
	char str[9];
	cin >> str;
	
	for (int i = 0; i <= 7; i++){
		sum += (str[i] - '0') * (8 - i);
	}
	
	for (char c = 'A'; c <= 'Z'; c++){
		temp = sum + letter(c) / 10 + (letter(c) % 10) * 9;
		
		if ((temp + str[8] - '0') % 10 == 0){
			cout << c;
		}
	}
	
	return 0;
}
