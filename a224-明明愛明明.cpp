#include <iostream>
using namespace std;

struct Data {
	char c;
	int n;
};

int main()
{
	int flag, i, j;
	string str;
	Data arr[1000];
	while (cin >> str) {
		for (i = 0; i < str.size(); i++)
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] - 'A' + 'a';
		for (i = 0; i < 1000; i++) {
			arr[i].c = ' ';
			arr[i].n = 1;
		}
		flag = 0;

		for (i = 0; i < str.size(); i++) {
			if (!(str[i] >= 'a' && str[i] <= 'z'))
				continue;
			for (j = 0; j < 1000; j++) {
				if (arr[j].c == ' ') {
					arr[j].c = str[i];
					break;
				}
				else if (arr[j].c == str[i]) {
					arr[j].n++;
					break;
				}
			}
		}

		for (i = 0; i < 1000 && arr[i].c != ' '; i++) {
			if (arr[i].n % 2 == 1)
				if (flag == 0)
					flag = 1;
				else {
					cout << "no..." << endl;
					goto end;
				}
		}
		cout << "yes !" << endl;
		end:;
	}
	return 0;
}
