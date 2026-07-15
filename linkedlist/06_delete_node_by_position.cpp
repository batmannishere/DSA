/* Node Structure
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
public:
    Node* deleteAtPosition(Node* head, int pos) {
        if (head == nullptr)
            return nullptr;

        // Delete head
        if (pos == 1) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        Node* temp = head;
        Node* prev = nullptr;
        int cnt = 1;

        while (temp != nullptr && cnt < pos) {
            prev = temp;
            temp = temp->next;
            cnt++;
        }

        // Position is out of range
        if (temp == nullptr)
            return head;

        prev->next = temp->next;
        delete temp;

        return head;
    }
};