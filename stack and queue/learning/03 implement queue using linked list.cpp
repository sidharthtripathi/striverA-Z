void Queue::push(int x) {
    // Write Your Code Here
    Node* newnode = new Node(x);
    if (front == NULL) {
      front = rear = newnode;
      return;
    }
    rear->next = newnode;
    rear = newnode;
}

int Queue::pop() {
    // Write Your Code Here
    if(front == NULL) return -1;
    Node* frontNode = front;
    front = front->next;
    int val = frontNode->data;
    delete frontNode;
    return val;
}