class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int k) {
     ListNode* f = head;
    for(int i = 1 ; i<=k ; i++ ) f = f->next;

    // now s and f will move together
    ListNode* s = head;
    while(f!=NULL and f->next!=NULL){
        f= f->next;
        s = s->next;
    }
    if(s == head and f == NULL){
        ListNode* temp = s->next;
        delete s;
        return temp;
    }
    ListNode* temp = s->next;
    s->next = temp->next;
    delete temp;
    return head;
    }
};