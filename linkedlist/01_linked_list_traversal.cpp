/*
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};
*/

class Solution {
  public:
    void printList(Node* head) {
        Node*temp=head;
        while(temp!=0){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        
    }
};