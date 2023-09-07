Node *rotate(Node *head, int k) {
     // Write your code here.
     // get size of ll
     int size = 0;
     Node* temp = head;
     Node* pre = NULL;
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
     Node* temp2 = head;
     for (int i = 1; i < k; i++) {
          temp2 = temp2->next;
     }
     Node* newhead = temp2->next;
     temp2->next = NULL;
     temp->next = head;
     return newhead;

}