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

string get_reversed_str(ListNode *l1) {
    string s1 = "";

    while (l1 != nullptr)
    {
        cout <<  l1->val ; 
        s1 += l1->val + 48;
        l1 = l1->next;
    }

    int i = 0, j = s1.size() - 1;
    while (i < j)
    {
        swap(s1[i], s1[j]);
        j--;
        i++;
    } 
    // fixing the trailing zero
    if (s1[s1.size() - 1 == 0])
    {
        int iterator = s1.size() - 2;
        while (iterator >= 0)
        {
            if (s1[iterator] > 0)
            {
                swap(s1[s1.size() - 1], s1[iterator]);
                break;
            }
            iterator--;
        }
    }
    return s1; 
}

int main()
{
    int num1 = 12345;
    int num2 = 456;

    ListNode *l1 = create_linked_list(num1);
   // ListNode *l2 = create_linked_list(num2);

    string str1 = get_reversed_str(l1);
   // string str2 = get_reversed_str(l2);
 
    for (int i = str1.size() - 1; i >= 0; i--) {
        int num = str1[i] - 48;
      
    }
        return 0;
}