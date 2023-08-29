class Solution {
public:
    ListNode* reverseList(ListNode* head) {
    if(head==NULL) return NULL;
    if(head->next == NULL) return head;
    ListNode* p = NULL;
    ListNode* n = NULL;
    ListNode* c = head;
    while(c!=NULL){
        n = c->next;
        // changing direction
        c->next = p;

        // moving
        p = c;
        c = n;

    }
    return p;

    }
};