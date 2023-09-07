Node* segregateEvenOdd(Node* head)
{
    // Write your code here
    Node* evenll = NULL;
    Node* eStart = NULL;
    Node* oddll = NULL;
    Node* temp = head;
    Node* oStart = NULL;
    while(temp!=NULL){
        Node* newnode = new Node(temp->data);
        if((newnode->data)%2==0){
            if(evenll == NULL){
                eStart = newnode;
                evenll = newnode;
            }
            else{
                evenll->next = newnode;
                evenll = newnode;
            }
        }
        else{
            if (oddll == NULL) {
                oddll = newnode;
                oStart = newnode;
            }
             else {
                oddll->next = newnode;
                oddll = newnode;
            }
        }
        temp = temp->next;
    }
    if(eStart == NULL) return oStart;
    evenll->next = oStart;
    return eStart;

}