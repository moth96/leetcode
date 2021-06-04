ListNode* getIntersectionNode(ListNode* headA, ListNode* headB)
{
	ListNode* q = headA;
	ListNode* p = headB;
	while (q != p)
	{
		q = q == NULL ? headB : q->next;
		p = p == NULL ? headA : p->next;
	}
	return q;
}
