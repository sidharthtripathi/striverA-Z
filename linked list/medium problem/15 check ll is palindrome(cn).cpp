Node* reverse(Node* head){
    if(head->next == NULL) return head;
    Node* p = NULL;
    Node* c = head;
    Node* n = c;
    while(c!=NULL){
        n = n->next;
        c->next = p;
        p = c;
        c = n;
    }
    return p;
}
bool isPalindrome(Node *head)
{
    // write your code here
    if(head->next == NULL) return true;
    Node* s = head;
    Node* f = head;
    while(f!=NULL and f->next!=NULL){
         s = s->next;
         f = f->next->next;
    }
    Node* revNode = NULL;
    if(f==NULL) revNode = reverse(s);
    else if(f->next == NULL) revNode = reverse(s->next);

    // iterate over full linked list
    Node* i = head;
    Node* j = revNode;
    while(j!=NULL){
        if(i->data != j->data) return false;
        i = i->next;
        j = j->next;
    }
    return true;
    
}