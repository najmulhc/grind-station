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
            cout << &arr[i] << endl;
            ListNode *new_node = new ListNode(arr[i]);
            mover->next = new_node;
            mover = new_node;
        }
        return head;
    }
}

void print_linked_list(ListNode *head)
{
    cout << head->val << " ";
    if (head->next != nullptr)
    {
        print_linked_list(head->next);
    }
}

ListNode *reverse(ListNode *head)
{
    if(head->next == nullptr) {
        return head; 
    } else { 
        ListNode *before()
    }
}

int main()
{
    vector<int> nums = {53, 1, 3, 567, 466, 777, 4, 3, 889, 23};
    ListNode *head = create_linked_list(nums);

    print_linked_list(head);

    return 0;
}