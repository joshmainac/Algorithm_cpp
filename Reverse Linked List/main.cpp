#include <iostream>
using namespace std;

 // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
 
 ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

  ListNode* reverseList(ListNode* head);
 
int main()
{
    ListNode a(1);
    ListNode b(2);
    ListNode c(3);
    ListNode d(4);
    ListNode e(5);
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    reverseList(&a);


	return 0;
}

ListNode* reverseList(ListNode* head)
{
    if (head == nullptr || head->next == nullptr)return head;

    ListNode *pos1 = head;
    ListNode *pos2 = head;
    ListNode *pos3 = head;


    pos2 = pos2->next;
    pos3 = (pos3->next)->next;
    pos1->next = nullptr;

    //
    while (pos3 != nullptr)
    {
        pos2->next = pos1;
        pos1 = pos2;
        pos2 = pos3;
        pos3 = pos3->next;
    }
    if (pos3 ==  nullptr)pos2->next = pos1;

   
    return pos2;
}