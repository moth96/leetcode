ListNode* removeElements(ListNode* head, int val) {
    ListNode* q = new ListNode(-1);
    q->next = head;
    ListNode* p = q;
    while(p->next){
        if(p->next->val == val){
            p->next = p->next->next;
        }else{
            p = p->next;
        }
    }
    return q->next;
}
