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
    LinkedList() : head(nullptr) {}
    void addFirst(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }
    void addAfter(int position, int value)
    {
        Node *newNode = new Node(value);
        Node *current = head;
        int count = 0;
        while (current != nullptr && count < position)
        {
            current = current->next;
            count++;
        }
        if (current == nullptr)
        {
            cout << "Position out of range.\n";
            return;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
    void addLast(int value)
    {
        Node *newNode = new Node(value);
        if (head == nullptr)
        {
            head = newNode;
            return;
        }
        Node *current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = newNode;
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
    LinkedList myList;
    myList.addLast(10);
    myList.addLast(20);
    myList.addFirst(9);
    myList.addAfter(2, 10);
    cout << myList.size() << "\n";
    myList.printList();
    return 0;
}