#include <iostream>
using namespace std;


// the custom data type for nodes in the linked List (a linked list must return the pointer  , not the value)
class Node
{
public:
    int data;
    Node *next; // the pointer to the next element;

public:
    Node(int data, Node *next)
    {
        data = data;
        next = next;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

int main()
{

    // convert an array to a  LL

    int nums[5] = {11, 21, 31, 41, 51};

    Node *head = new Node(nums[0]);

    Node *m = head;

    for (int i = 1; i < 5; i++)
    {
        Node *item = new Node(nums[i]);
        m->next = item;
        m = item;
    }
    int size = 0; 
    Node *iterator = head;
    while (iterator != nullptr)
    {
        cout << iterator->data << " ";
        iterator = iterator->next; 
        size++;
    }

    cout << endl
         << "Size is " << size; 
    return 0;
}