#include <iostream>
using namespace std;

int main()
{
	int i, j, k, point = 0, flag[3] = {0, 0, 0}, out = 0, maxOut;
	int arr[10][50];
	string temp;
	
	for (i = 0; i < 9; i++) {
		cin >> arr[i][0];
		for (j = 1; j <= arr[i][0]; j++) {
			cin >> temp;
			if ((temp[0] == 'F' || temp[0] == 'G') || temp[0] == 'S')
				arr[i][j] = 0;
			else if (temp[0] == 'H')
				arr[i][j] = 4;
			else
				arr[i][j] = temp[0] - '0';
		}
	}
	cin >> maxOut;
	
	for (i = 1; i < 50; i++) {
		for (j = 0; j < 9; j++) {
			if (i > arr[j][0])
				continue;
			else if (arr[j][i] == 0) {
				out++;
				if (out >= maxOut)
					goto end;
				if (out % 3 == 0)
					for (k = 0; k < 3; k++)
						flag[k] = 0;
			}
			else if (arr[j][i] == 4) {
				point++;
				for (k = 0; k < 3; k++)
					if (flag[k]) {
						point++;
						flag[k] = 0;
					}
			}
			else if (arr[j][i] == 1) {
				if (flag[2] == 1) {
					point++;
					flag[2] = 0;
				}	
				if (flag[1] == 1) {
					flag[2] = 1;
					flag[1] = 0;
				}
				if (flag[0] == 1) {
					flag[1] = 1;
					flag[0] = 0;
				}
				flag[0] = 1;
			}
			else if (arr[j][i] == 2) {
				if (flag[2] == 1) {
					point++;
					flag[2] = 0;
				}
				if (flag[1] == 1) {
					point++;
					flag[1] = 0;
				}	
				if (flag[0] == 1) {
					flag[2] = 1;
					flag[0] = 0;
				}
				flag[1] = 1;
			}
			else if (arr[j][i] == 3) {
				if (flag[2] == 1) {
					point++;
					flag[2] = 0;
				}
				if (flag[1] == 1) {
					point++;
					flag[1] = 0;
				}	
				if (flag[0] == 1) {
					point++;
					flag[0] = 0;
				}
				flag[2] = 1;
			}
		}
	}
	end:
		cout << point << endl;
	return 0;
}
