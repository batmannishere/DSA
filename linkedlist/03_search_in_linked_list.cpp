/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
}; */

class Solution {
  public:
    bool searchKey(Node* head, int key) {
        Node*temp=head;
        while(temp!=0){
            if(temp->data==key){
                return true;
                break;
            }
            else{
                temp=temp->next;
            }
        }
        return false;
        
    }
};
