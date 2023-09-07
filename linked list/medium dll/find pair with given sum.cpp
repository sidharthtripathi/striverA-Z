vector<pair<int, int>> findPairs(Node* head, int k)
{
    Node* i = head;
    Node* temp = head;
    while(temp->next != NULL) temp = temp->next;
    Node* j = temp;
    vector<pair<int,int>> ans;

    while(i!=j and i!=NULL and j!=NULL){
        if(i->data + j->data > k) j = j->prev;
        else if(i->data + j->data < k) i = i->next;
        else{
            ans.push_back({i->data,j->data});
            i = i->next;
        }
    }
    return ans;
}