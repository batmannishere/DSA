/*
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
    Node* insertPos(Node* head, int pos, int val) {
        Node* newNode = new Node(val);

        // Insert at the beginning
        if (pos == 1) {
            newNode->next = head;
            return newNode;
        }

        Node* temp = head;
        int cnt = 1;

        while (temp != nullptr) {
            if (cnt == pos - 1) {
                newNode->next = temp->next;
                temp->next = newNode;
                break;
            }

            temp = temp->next;
            cnt++;
        }

        return head;
    }
};