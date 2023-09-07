#include <set>
Node* findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    set<Node*> mySet;
    Node* temp = firstHead;
    while(temp!=NULL){
        mySet.insert(temp);
        temp = temp->next;
    }
    temp = secondHead;
    while(temp!=NULL){
        if(mySet.find(temp)!=mySet.end()) return temp;
        temp = temp->next;
    }
    return NULL;
}