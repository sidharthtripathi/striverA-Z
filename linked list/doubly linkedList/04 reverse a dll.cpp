Node* reverseDLL(Node* head)
{   
    // Write your code here   
    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;

    while(curr != NULL){
        next = curr->next;
        // changign direction
        curr->next = prev;
        curr->prev = next;

        // moving
        prev = curr;
        curr = next;

    }
    return prev;
    
}