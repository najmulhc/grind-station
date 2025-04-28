#include <iostream>
#include <vector>
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

ListNode *create_linked_list(vector<int> arr)
{
    if (arr.size() == 0)
    {
        return nullptr;
    }
    else if (arr.size() == 1)
    {
        ListNode *head = new ListNode(arr[0]);
        return head;
    }
    else
    {
        // we are sure the array has more than one element
        ListNode *head = new ListNode(arr[0]);
        ListNode *mover = head;
        for (int i = 1; i < arr.size(); i++)
        {
            ListNode *new_node = new ListNode(arr[i]);
            mover->next = new_node;
            mover = new_node;
        }
        return head;
    }
}

void print(ListNode *head)
{
    cout << head->val << " ";
    if (head->next != nullptr)
    {
        print(head->next);
    }
}

ListNode *main()
{
    vector<int> arr = {1 , 2 , 3, 4, 5 , 6};
    ListNode *head = create_linked_list(arr);

    ListNode *oddHead = head;
    ListNode *oddTail = oddHead;

    if (oddTail == nullptr)
    {
        return head;
    }

    ListNode *evenHead = oddHead->next;
    ListNode *evenTail = evenHead;

    if (evenTail == nullptr)
    {
        return head;
    }

    ListNode *candidate = evenTail->next;
    if (candidate == nullptr)
    {
        return head;
    }

    // Rewire first odd pickup
    evenTail->next = candidate->next;
    oddTail->next = candidate;
    candidate->next = evenHead;

    while (evenTail->next != nullptr)
    {
        oddTail = oddTail->next;
        evenTail = evenTail->next;
        candidate = evenTail->next;

        if (candidate != nullptr)
        {
            evenTail->next = candidate->next;
            oddTail->next = candidate;
            candidate->next = evenHead;
        }
        else
        {
            break;
        }
    }

    return head;
}