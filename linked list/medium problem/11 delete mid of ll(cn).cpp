Node* deleteMiddle(Node* head){
    // Write your code here.
    Node* preMid = NULL;
    Node* mid = head;
    Node* f  = head;
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