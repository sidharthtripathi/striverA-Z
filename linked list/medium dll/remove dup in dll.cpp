Node * removeDuplicates(Node *head)
{   if(head->next == NULL) return head;
    Node* temp = head;
    while(temp->next != NULL){
        bool deleted = false;
        if(temp->data == temp->next->data){
            deleted = true;
            Node* ntd = temp->next;
            temp->next = ntd->next;
            if(ntd->next != NULL){
                ntd->next->prev = temp;
            }
            delete ntd;
        }
        if(!deleted) temp = temp->next;
    }
    return head;
    
}