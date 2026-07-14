/* Structure of linked list Node
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    int getCount(Node* head) {
        Node*temp=head;
        int cnt=0;
        while(temp!=0){
            cnt++;
            temp=temp->next;
        }
        return cnt;
        
    }
};