Node* removeKthNode(Node* head, int k)
{
    // Write your code here.
    Node* f = head;
    for(int i = 1 ; i<=k ; i++ ) f = f->next;

    // now s and f will move together
    Node* s = head;
    while(f!=NULL and f->next!=NULL){
        f= f->next;
        s = s->next;
    }
    if(s == head and f == NULL){
        Node* temp = s->next;
        delete s;
        return temp;
    }
    Node* temp = s->next;
    s->next = temp->next;
    delete temp;
    return head;

}