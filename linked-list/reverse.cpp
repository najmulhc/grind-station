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

ListNode *reverse(ListNode *head)
{
    if (head->next == nullptr)
    {
        return head;
    }
    else
    {
        ListNode *newHead = new ListNode(head->val);
        ListNode *prev = reverse(head->next);
        ListNode *copy = prev;
        while (copy->next != nullptr)
        {
            copy = copy->next;
        }
        copy->next = newHead;

        return prev;
    }
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    ListNode *head = create_linked_list(nums);

    ListNode *reversed = reverse(head);

    print(reversed);

    return 0;
}