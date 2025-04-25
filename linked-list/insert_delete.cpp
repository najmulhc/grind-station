#include<iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;

    ListNode(int data)
    {
        val = data;
        next = nullptr;
    }
};

ListNode *create_linked_list(int n)
{
    ListNode *tail = new ListNode(n % 10); // the east element is the tail
    n /= 10;                               // we no longher need the last digit
    ListNode *head = tail;
    while (n > 0)
    {
        ListNode *newNode = new ListNode(n % 10);
        newNode->next = head;
        head = newNode;
        n /= 10;
    }
    return head;
}

void print(ListNode *head) { 
    while(head != nullptr) {
        cout << head->val << " ";
        head = head->next; 
    }
    cout << endl;
}

int main() {
    int num = 658765;

    ListNode *head = create_linked_list(num);
    ListNode *copy = head;

    while(copy != nullptr) {
        ListNode *nextElem = copy->next;

        if(nextElem->next == nullptr) {
            copy->next = nullptr; 
        }

        copy = copy->next; 
    }
    delete copy; 
    print(head);
    return 0;
}