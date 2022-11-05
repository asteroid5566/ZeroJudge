// https://zerojudge.tw/ShowProblem?problemid=d847
// waiting for rewrite
#include <iostream>
#include <algorithm>
using namespace std;

struct point {
	int x, y;
	int rank;
	int index;
};

point arr[20000], tmp[20000];
int maxRank = 0, minRank = 999999, n = 0;
double sum = 0;

bool cmp(point a, point b)
{
	return a.index < b.index;
}

void swap(point *a, point *b)
{
	point temp;
	temp.x = a->x;
	temp.y = a->y;
	temp.rank = a->rank;
	temp.index = a->index;
	a->x = b->x;
	a->y = b->y;
	a->rank = b->rank;
	a->index = b->index;
	b->x = temp.x;
	b->y = temp.y;
	b->rank = temp.rank;
	b->index = temp.index;
}

bool compare(point *a, point *b)
{		
	if (a->x == b->x)
		return a->y > b->y;
	else
		return a->x < b->x;
}

void heap(point arr[], int n, int i)
{
    int max = i, left = 2 * i + 1, right = 2 * i + 2;
    
    if (compare(&arr[max], &arr[left]) && left < n)
        max = left;
        
    if (compare(&arr[max], &arr[right]) && right < n)
        max = right;
        
    if (max != i) {
        swap(&arr[i], &arr[max]);
        heap(arr, n, max);
    }
}
 
void heapSort(point arr[], int n)
{
	int i;
	
    for (i = n / 2 - 1; i >= 0; i--)
        heap(arr, n, i);
 
    for (i = n - 1; i >= 0; i--) {
        swap(&arr[0], &arr[i]);
        heap(arr, i, 0);
    }
}

void rankFinding(int l, int r)
{
	if (r - 1 <= l)
		return;
	else {
		int i, j, k, m = (l + r) >> 1, count = 0;
		
		rankFinding(l, m); 
		rankFinding(m, r);
		
		for (i = l, j = m, k = l; i < m || j < r; ) {
			if (i == m) {
				tmp[k] = arr[j]; 
				tmp[k].rank += count;
				j++; 
				k++;
			}
			else if (j == r) {
				tmp[k] = arr[i];
				i++; 
				k++;
			}
			else if (arr[i].y < arr[j].y) {
				tmp[k] = arr[i]; 
				count++;
				i++; 
				k++;
			}
			else {
				tmp[k] = arr[j]; 
				tmp[k].rank += count;
				j++; 
				k++;
			}
		}
		
		for (i = l; i < r; i++)
			arr[i] = tmp[i];
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int temp;
	while (cin >> temp) {
		n = 0;
		while (temp--) {
			cin >> arr[n].x >> arr[n].y;
			arr[n].rank = 0;
			arr[n].index = n;
			n++;
		}
		
		heapSort(arr, n);
		rankFinding(0, n);
		
		sort(arr, arr + n, cmp);
		
		for (int i = 0; i < n; i++) {
			cout << arr[i].rank << "\n";
		}
	}
	return 0;
}
