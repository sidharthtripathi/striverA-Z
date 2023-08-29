class Solution {
public:
    ListNode* middleNode(ListNode* head) {
     ListNode* first = head;
    if(first->next == NULL) return first;
    ListNode* second = head;
    while(second != NULL and second->next!=NULL ){
        first = first->next;
        second = second->next->next;
    }
    return first;
    }
};