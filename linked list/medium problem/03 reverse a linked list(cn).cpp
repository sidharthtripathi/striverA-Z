Node* reverseLinkedList(Node *head)
{
    // Write your code here
    if(head->next == NULL) return head;
    Node* p = NULL;
    Node* n = NULL;
    Node* c = head;
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