#include <set>
bool detectCycle(Node *head)
{
	//	Write your code here
    set<Node*> nodeSet;
    Node* temp = head;
    while(temp!=NULL){
        auto it = nodeSet.find(temp);
        if(it == nodeSet.end()) nodeSet.insert(temp);
        else return true;
        temp = temp->next;
    }
    return false;
}