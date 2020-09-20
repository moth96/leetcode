#include"solution.h"
#include"list.h""

vector<int> reversePrint(ListNode* head)
{
	int n = 0;
	ListNode* q = head;
	while (q)
	{
		n++;
		q = q->next;
	}
	vector<int>res(n);
	while (head)
	{
		res[--n] = head->val;
		head = head->next;
	}
	return res;
}