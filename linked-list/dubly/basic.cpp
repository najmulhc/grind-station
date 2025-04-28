#include <iostream>
using namespace std;

struct ListNode
{
    int data;
    ListNode *prev;
    ListNode *next;

    ListNode(int val)
    {
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};

int main()
{
    ListNode *head = new ListNode(43);

    ListNode *tail = new ListNode(100);

    tail->prev = head;
    head->next = tail;

    ListNode *newHead = new ListNode(500);
    head->prev = newHead;
    newHead->next = head;
    head = newHead;

    ListNode *copy = head; 

    while (copy !=nullptr)
    {
        cout << copy->data << " ";

        copy = copy->next; 
    }
    

    return 0;
}
