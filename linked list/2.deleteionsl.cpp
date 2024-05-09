#include <iostream>
using namespace std;
class LinkedList
{
private:
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int value) : data(value), next(nullptr) {}
    };
    Node *head;

public:
    LinkedList() : head(nullptr){};
    Node *deleteFirst(Node *head)
    {
        if (head == NULL)
        {
            return NULL;
        }
        Node *tempNode = head;
        head = head->next;
        delete tempNode;
        return head;
    }
    Node* deleteAfter(int position, Node* head) {
        
    }
    Node *deleteLast(Node *head)
    {
        if (head == NULL)
        {
            return NULL;
        }
        if (head->next == NULL)
        {
            delete head;
        }
        return head;
    }
    void deleteNode(Node* node) {

    }
    int size()
    {
        int count = 0;
        Node *current = head;
        while (current != nullptr)
        {
            current = current->next;
            count++;
        }
        return count;
    }
    void printList()
    {
        Node *current = head;
        while (current != nullptr)
        {
            cout << current->data << "->";
            current = current->next;
        }
    }
};
int main()
{

    return 0;
}