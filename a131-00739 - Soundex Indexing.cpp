// https://zerojudge.tw/ShowProblem?problemid=a131
#include <iostream>
#include <iomanip>
using namespace std;

char func(char c)
{
	switch (c) {
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'Y':
		case 'W':
		case 'H':
			return '#';
		case 'B':
		case 'P':
		case 'F':
		case 'V':
			return '1';
		case 'C':
		case 'S':
		case 'K':
		case 'G':
		case 'J':
		case 'Q':
		case 'X':
		case 'Z':
			return '2';
		case 'D':
		case 'T':
			return '3';
		case 'L':
			return '4';
		case 'M':
		case 'N':
			return '5';
		case 'R':
			return '6';
	}
}


int main()
{
	int i, idx;
	string name, code;
	cout << "NAME                     SOUNDEX CODE" << endl;
	
	while (cin >> name) {
		code = name[0];
		idx = 1;
		for (i = 0; i < 3; i++) {
			if (idx >= name.size()) {
				code += '0';
				continue;
			}
			
			switch (func(name[idx])) {
				case '#':
					idx++;
					i--;
					break;
				case '1':
					if (func(name[idx - 1]) != '1')
						code += '1';
					else
						i--;
					idx++;
					break;
				case '2':
					if (func(name[idx - 1]) != '2')
						code += '2';
					else
						i--;
					idx++;
					break;
				case '3':
					if (func(name[idx - 1]) != '3')
						code += '3';
					else
						i--;
					idx++;
					break;
				case '4':
					if (func(name[idx - 1]) != '4')
						code += '4';
					else
						i--;
					idx++;
					break;
				case '5':
					if (func(name[idx - 1]) != '5')
						code += '5';
					else
						i--;
					idx++;
					break;
				case '6':
					if (func(name[idx - 1]) != '6')
						code += '6';
					else
						i--;
					idx++;
					break;
			}
		}
		cout << left << "          " << setw(25) << name << code << endl;
	}
	cout << setw(20) << " " << "END OF OUTPUT" << endl;
	return 0;
}
