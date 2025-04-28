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

int main()
{

    vector<int> arr = {1, 3};

    ListNode *list = create_linked_list(arr);
    int count = 0;

    ListNode *copy = list;
    while (copy != nullptr)
    {
        count++;

        copy = copy->next;
        /* code */
    }

    int mid = 0;

    if (count % 2 == 1)
    {
        mid = (count + 1) / 2;
    }
    else
    {
        mid = count / 2 + 1;
    }

    int i = 0;
    ListNode *newCopy = list;

    while (newCopy != nullptr)
    {
        i++;
        if (i == mid)
        {
            if (i == count)
            {
                list->next = nullptr;
                break;
            }
            newCopy->val = newCopy->next->val;
            newCopy->next = newCopy->next->next;
            break;
        }
        newCopy = newCopy->next;
    }

    print(list);

    return 0;
}