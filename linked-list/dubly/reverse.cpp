#include <iostream>
#include <vector>
using namespace std;

struct ListNode
{
    int val;
    ListNode *prev;
    ListNode *next;

    ListNode(int data)
    {
        val = data;
        prev = nullptr;
        next = nullptr;
    }
};

int main()
{
    vector<int> numbers = {1, 2, 3, 4, 5};

    ListNode *head = new ListNode(numbers[0]); // we have our
    ListNode *mover = head;
    int i = 1;
    while (i < numbers.size())
    {
        ListNode *newNode = new ListNode(numbers[i]);
        newNode->prev = mover;
        mover->next = newNode;
        mover = newNode;
        i++;
    }

    ListNode *copy = head;

    ListNode *reverse = new ListNode(copy->val);

    copy = copy->next;

    while (copy != nullptr)
    {
        ListNode *new_node = new ListNode(copy->val);
        reverse->prev = new_node;
        new_node->next = reverse;
        reverse = new_node;

        copy = copy->next;
    }

    // the printer of the reverse function
    ListNode *iterator = reverse;
    while (iterator != nullptr)
    {
        cout << iterator->val << " ";
        iterator = iterator->next;
    }
    return 0;
}