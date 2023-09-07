class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
            ListNode* preMid = NULL;
    ListNode* mid = head;
    ListNode* f  = head;
    if(mid->next == NULL){
        delete head; return NULL;
    }
    while(f!=NULL and f->next!=NULL ){
        preMid = mid;
        mid = mid->next;
        f = f->next->next;
    }
    preMid->next = mid->next;
    delete mid;
    return head;
    }
};