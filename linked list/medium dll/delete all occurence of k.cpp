Node * deleteAllOccurrences(Node* head, int k) {
    // Write your code here
    Node* s = NULL;
    Node* tail = NULL;
    Node* temp = head;
    while(temp!=NULL){
        if(temp->data != k){
            Node* newnode = new Node(temp->data);
            if(s == NULL){
                s = newnode;
                tail = newnode;
            }
            else{
                newnode->prev = s;
                tail->next = newnode;
                tail = newnode;
            }
        }
        temp = temp->next;
    }
    return s;
}
