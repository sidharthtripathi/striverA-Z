
int searchInLinkedList(Node<int> *head, int k) {
    // Write your code here.
    Node<int>* temp = head;
    while(temp!=NULL){
        if(temp->data == k) return 1;
        temp = temp->next;
    }
    return 0;
}