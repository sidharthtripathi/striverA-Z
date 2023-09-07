class Solution {
public:
ListNode* reverse(ListNode* head){
    if(head->next == NULL) return head;
    ListNode* p = NULL;
    ListNode* c = head;
    ListNode* n = c;
    while(c!=NULL){
        n = n->next;
        c->next = p;
        p = c;
        c = n;
    }
    return p;
}
    bool isPalindrome(ListNode* head) {
            if(head->next == NULL) return true;
    ListNode* s = head;
    ListNode* f = head;
    while(f!=NULL and f->next!=NULL){
         s = s->next;
         f = f->next->next;
    }
    ListNode* revNode = NULL;
    if(f==NULL) revNode = reverse(s);
    else if(f->next == NULL) revNode = reverse(s->next);

    // iterate over full linked list
    ListNode* i = head;
    ListNode* j = revNode;
    while(j!=NULL){
        if(i->val != j->val) return false;
        i = i->next;
        j = j->next;
    }
    return true;
    }
};