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

void print(ListNode *head)
{
    while (head != nullptr)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int num  = 343;
    ListNode *head = create_linked_list(num);
    ListNode *copy = head;

    ListNode *reversed = new ListNode(copy->val);
    while(copy->next != nullptr) {
        ListNode *next = copy->next;

        ListNode *new_node = new ListNode(next->val);
        new_node->next = reversed;
        reversed = new_node;
        copy = copy->next; 
    }

    ListNode *firstnode = head, *secondNode = reversed; 
    while(firstnode != nullptr) {
      if(firstnode->val != secondNode->val) {
          cout << "it must not be a palindrome";
          break;
      }
        firstnode = firstnode->next;
        secondNode = secondNode->next;
    }
    return 0;

}