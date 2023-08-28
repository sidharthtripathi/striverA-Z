
Node * insertAtTail(Node *head, int k) {
    // Write your code here
    Node* newnode = new Node(k);
    if(head == NULL) return newnode;
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;
    return head;
}