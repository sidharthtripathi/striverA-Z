class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
     if(head == NULL) return NULL;
    int size = 0;
     ListNode* temp = head;
     ListNode* pre = NULL;
     while(temp!=NULL){
          size++;
          pre = temp;
          temp = temp->next;
     }
     temp = pre;
     k = k % size;
     if(k==0) return head;
     k = size - k;
     // temp is last one till here
     ListNode* temp2 = head;
     for (int i = 1; i < k; i++) {
          temp2 = temp2->next;
     }
     ListNode* newhead = temp2->next;
     temp2->next = NULL;
     temp->next = head;
     return newhead;
    }
};