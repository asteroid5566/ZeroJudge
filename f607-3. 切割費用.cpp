// https://zerojudge.tw/ShowProblem?problemid=f607
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

struct DATA {
	long long n1, n2;
};

bool cmp(DATA a, DATA b)
{
	return a.n2 < b.n2;
}

int main()
{
	long long n, l, i, sum = 0, temp;
	cin >> n >> l;
	DATA arr[n];
	set<long long> s;
	set<long long>::iterator it; 
	s.insert(0);
	s.insert(l);
	
	for (i = 0; i < n; i++)
		cin >> arr[i].n1 >> arr[i].n2;
	sort(arr, arr + n, cmp);
	
	for (i = 0; i < n; i++) {
		s.insert(arr[i].n1);
		it = s.find(arr[i].n1);
		temp = *(++it);
		it--;
		it--;
		sum += temp - *it;
	}
	
	cout << sum << endl;
	return 0;
}
