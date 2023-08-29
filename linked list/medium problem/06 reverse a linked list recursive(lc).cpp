class Solution {
public:
    ListNode* reverseList(ListNode* head) {
    if(head==NULL or head->next == NULL) return head;
    ListNode* revHead = reverseList(head->next);
    // last of rev linked list
    ListNode* temp = revHead;
    while(temp->next!=NULL) temp = temp->next;
    temp->next = head;
    head->next = NULL;
    return revHead;


    }
};