// https://zerojudge.tw/ShowProblem?problemid=f822
#include <iostream>
using namespace std;

int flag = 0, black = 0, white = 0, arr[9][9];
char map[9][9];

void bfs(int color, int y, int x)
{
	if (y < 0 || x < 0 || y >= 9 || x >= 9 || map[y][x] != '.' || flag)
		return;
	if (color == 'B' && arr[y][x] == 2 || color == 'W' && arr[y][x] == 1) {
		flag = 1;
		return;
	}
	if (arr[y][x])	//checked before
		return;
	
	if (color == 'B') {
		arr[y][x] = 1;
		black++;
		bfs('B', y - 1, x);
		bfs('B', y + 1, x);
		bfs('B', y, x - 1);
		bfs('B', y, x + 1);
	}
	else if (color == 'W') {
		arr[y][x] = 2;
		white++;
		bfs('W', y - 1, x);
		bfs('W', y + 1, x);
		bfs('W', y, x - 1);
		bfs('W', y, x + 1);
	}
}

int main()
{
	int i, j;
	
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			cin >> map[i][j];
		}
	}
	
	for (i = 0; i < 9 && !flag; i++) {
		for (j = 0; j < 9; j++) {
			if (flag)
				break;
			if (map[i][j] == 'B') {
				black++;
				bfs('B', i - 1, j);
				bfs('B', i + 1, j);
				bfs('B', i, j - 1);
				bfs('B', i, j + 1);
			}
			else if (map[i][j] == 'W') {
				white++;
				bfs('W', i - 1, j);
				bfs('W', i + 1, j);
				bfs('W', i, j - 1);
				bfs('W', i, j + 1);
			}
		}
	}
	
	if (flag)
		cout << "Wrong\n";
	else {
		if (black > white)
			cout << "Black wins!!\n";
		else
			cout << "White wins!!\n";
		cout << black << ":" << white << "\n";
		for (i = 0; i < 9; i++) {
			for (j = 0; j < 9; j++) {
				if (!arr[i][j])
					cout << map[i][j];
				else if (arr[i][j] == 1)
					cout << 'B';
				else
					cout << 'W';
			}
			cout << "\n";
		}		
	}
	return 0;
}
