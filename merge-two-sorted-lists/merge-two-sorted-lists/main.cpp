#include <iostream>
using namespace std;


//  Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
  ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);

void main()
{

    ListNode l1(4);
    ListNode l2(5);
    ListNode l3(7);
    ListNode l4(8);
    ListNode l5(9);
    (&l1)->next = &l2;
    l1;






}

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
{
    while (l1->next != nullptr)
    {
        l1 = l1->next;
    }
    l1;



    ListNode aaa(6);
    return &aaa;
}