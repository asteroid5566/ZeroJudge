// https://zerojudge.tw/ShowProblem?problemid=f580
#include <iostream>
using namespace std;

class DICE {
public:
	int front = 4, top = 1, right = 2, left = 5, buttom = 6, back = 3;
};

void spinF(DICE *d)
{
	int f = d->front, t = d->top, r = d->right, l = d->left, bu = d->buttom, ba = d->back;
	d->front = t;
	d->top = ba;
	d->buttom = f;
	d->back = bu;
}

void spinR(DICE *d)
{
	int f = d->front, t = d->top, r = d->right, l = d->left, bu = d->buttom, ba = d->back;
	d->top = l;
	d->right = t;
	d->buttom = r;
	d->left = bu;
}

int main()
{
	int n, m, i, a, b;
	cin >> n >> m;
	DICE arr[n], temp;
	
	for (i = 0; i < m; i++) {
		cin >> a >> b;
		if (a > 0 && b > 0) {
			temp = arr[a - 1];
			arr[a - 1] = arr[b - 1];
			arr[b - 1] = temp;
		}
		else if (b == -1)
			spinF(&arr[a - 1]);
		else
			spinR(&arr[a - 1]);
	}
	
	cout << arr[0].top;
	for (i = 1; i < n; i++)
		cout << " " << arr[i].top;
	cout << endl;
	return 0;
}
