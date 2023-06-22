// https://zerojudge.tw/ShowProblem?problemid=f164
#include <iostream>
using namespace std;

struct NODE {
	NODE *front, *next;
	int num;
};

int main()
{
	int n, m, q, i, t, a, b;
	char op;
	NODE *head, *curr, *p, *pA, *pB, *p1, *p2;
	cin >> n >> m >> q;
	
	head = new NODE();
	head->front = NULL;
	head->num = 0;
	curr = head;
	
	for (i = 1; i < n; i++) {
		p = new NODE();
		p->front = curr;
		p->num = i;
		curr->next = p;
		curr = p;
	}
	p->next = head;
	head->front = p;
	
	for (i = 0; i < m; i++) {
		cin >> op >> a >> b;
		
		if (a == b)
			continue;
		
		pA = pB = NULL;
		
		curr = head;
		do {
			if (curr->num == a)
				pA = curr;
			else if (curr->num == b)
				pB = curr;
			if (pA != NULL && pB != NULL)
				break;
			curr = curr->next;
		} while (curr != head);
		
		if (op == 'F') {
			p1 = pA->front;
			p2 = pA->next;
			p1->next = p2;
			p2->front = p1;
			
			p = pB->next;
			pB->next = pA;
			pA->front = pB;
			pA->next = p;
			p->front = pA;
		}
		else {
			p1 = pA->front;
			p2 = pA->next;
			p1->next = p2;
			p2->front = p1;
			
			p = pB->front;
			pB->front = pA;
			pA->next = pB;
			pA->front = p;
			p->next = pA;
		}
	}
	
	for (i = 0; i < q; i++) {
		cin >> t;
		curr = head;
		
		do {
			if (curr->num == t) {
				cout << curr->front->num << " " << curr->next->num << " ";
				break;
			}
			curr = curr->next;
		} while (curr != head);
	}
	return 0;
}
