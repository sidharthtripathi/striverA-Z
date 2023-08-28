Node *deleteLast(Node *list){
    // Write your code here
    Node* temp = list;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
    return list;
}