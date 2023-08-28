Node* insertAtFirst(Node* list, int newValue) {
    // Write your code here
    Node* newnode = new Node(newValue);
    if(list == NULL) return newnode;
    newnode->next = list;
    return newnode;

}