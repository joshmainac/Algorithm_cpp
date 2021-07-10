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
    //list A
    ListNode node1(4);
    ListNode node2(5);
    (&node1)->next = &node2;
    ListNode node3(7);
    (&node2)->next = &node3;
    ListNode node4(8);
    (&node3)->next = &node4;
    ListNode node5(9);
    (&node4)->next = &node5;
    node1;
    //listB
    ListNode nodea(4);
    ListNode nodeb(5);
    (&nodea)->next = &nodeb;
    ListNode nodec(7);
    (&nodeb)->next = &nodec;
    ListNode noded(8);
    (&nodec)->next = &noded;
    ListNode nodee(9);
    (&noded)->next = &nodee;
    nodea;

    mergeTwoLists(&node1, &nodea);







}

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
{
    ListNode* temp = l1;
    while (l1->next != nullptr)
    {
        l1 = l1->next;
    }
    l1;
    l1->next = l2;
    temp;
    auto temp2 = temp;

    while (temp != nullptr)
    {
        while (temp2 != nullptr)
        {
            temp2 = temp->next;
            if (temp > temp2)
            {

            }
        }
        temp = temp->next;
    }



    ListNode aaa(6);
    return &aaa;
}