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
    ListNode nodea(5);
    ListNode nodeb(55);
    (&nodea)->next = &nodeb;
    ListNode nodec(77);
    (&nodeb)->next = &nodec;
    ListNode noded(88);
    (&nodec)->next = &noded;
    ListNode nodee(99);
    (&noded)->next = &nodee;
    nodea;

    auto ans = mergeTwoLists(&node1, &nodea);
    ans;






}

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
{
    ListNode* newhead = NULL;
    ListNode* current = NULL;
    ListNode* temp = NULL;

    if ((l1 == NULL) && (l2 == NULL))
    {
        return newhead;
    }
    if ((l2 == NULL))
    {
        return l1;
    }
    if ((l1 == NULL))
    {
        return l2;
    }

    while(1)
    {
        if (l1 == NULL)
        {
            current = newhead;
            while (current->next != NULL)
            {
                current = current->next;
            }
            current->next = l2;

            ListNode aaa(6);
            return newhead;
        }
        if (l2 == NULL)
        {
            current = newhead;
            while (current->next != NULL)
            {
                current = current->next;
            }
            current->next = l1;
            ListNode aaa(6);
            return newhead;
        }
        else if ((l1->val) <= (l2->val))
        {
            temp = l1;
            l1 = l1->next;
            temp->next = nullptr;
        }
        else if ((l1->val) > (l2->val))
        {
            temp = l2;
            l2 = l2->next;
            temp->next = nullptr;

        }


        current = newhead;
        if (current == NULL)
        {
            newhead = temp;
        }
        else
        {
            while (current->next != NULL)
            {
                current = current->next;
            }
            current->next = temp;
        }

    }

}

