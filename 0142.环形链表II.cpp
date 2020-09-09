#include"solution.h"
#include"list.h"

ListNode* detectCycle(ListNode* head)
{
	unordered_map<ListNode*,int> ump;
	while (head)
	{
		if (ump[head]) return head;
		ump[head]++;
		head = head->next;
	}
	return nullptr;
}