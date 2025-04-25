#include<iostream>
using namespace std;

struct  ListNode
{
    int val;
    ListNode *next; 

    ListNode(int data) {
        val = data;
        next = nullptr; 
    }
};
 

int main() {
    int arr[5] = {42, 16, 21, 6, 73};

    ListNode *head = new ListNode(arr[0]);

    ListNode *copy = head;
    // this should create the whole linkedList
    for (int i = 1; i < 5; i++) {
        ListNode *new_node = new ListNode(arr[i]);
        copy->next = new_node;
        copy = new_node;
    }

    ListNode *new_head =  head->next; 
    ListNode *printer = new_head; 

    while(printer != nullptr) {
        cout << printer->val << " ";
        printer = printer->next; 
    }

    return 0;
}