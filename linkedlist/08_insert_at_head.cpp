/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node *insertAtFront(Node *head, int x) {
        Node *newnode=new Node(x);
        if(head==nullptr) return newnode;
        Node *temp=head;
        newnode->next=temp;
        head=newnode;
        return head ;
        
    }
};