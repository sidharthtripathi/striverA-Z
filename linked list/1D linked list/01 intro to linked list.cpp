Node* constructLL(vector<int>& arr) {
    // Write your code here
    Node* head = NULL;
    Node* prev = NULL;
    for(int i = 0 ; i<arr.size() ; i++){
        Node* newnode = new Node(arr[i]);
        if(head == NULL){ 
        head = newnode;
        prev = head;
        }
        else{
            prev->next = newnode;
            prev = newnode;
        }
    }
    return head;
}