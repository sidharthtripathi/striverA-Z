Node *findMiddle(Node *head) {
    // Write your code here
    Node* first = head;
    if(first->next == NULL) return first;
    Node* second = head;
    while(second != NULL and second->next!=NULL ){
        first = first->next;
        second = second->next->next;
    }
    return first;
}