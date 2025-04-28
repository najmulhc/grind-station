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
    vector<int> arr = { 1, 2};
    ListNode *head = create_linked_list(arr);

    int n = 1;

    int size = 0;

    ListNode *copy = head;
    ListNode *iterator = head;
    while (copy != nullptr)
    {

        size++;
        copy = copy->next;
    }

    int count = 0;

    n = size - (n -1);
    while (iterator != nullptr)
    {
        count++;
        if (count == n && n != size)
        {

            ListNode *elem = iterator;
            ListNode *next = elem->next;

            elem->val = next->val;
            elem->next = next->next;
        }
      if(n == size && count == n-1) { 
          ListNode *item = iterator;
          item->next = nullptr;
          break; 
      }
        iterator = iterator->next;
    }

    
    print(head);
    return 0;
}