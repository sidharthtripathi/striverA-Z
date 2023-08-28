Node* constructDLL(vector<int>& arr) {
    // Write your code here
    Node* head = new Node(arr[0]);
    Node* tail = head;
    for(int i = 1 ; i<arr.size() ; i++){
        Node* newnode = new Node(arr[i]);
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
    return head;
}