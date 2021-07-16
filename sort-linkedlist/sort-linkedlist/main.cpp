#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};
ListNode* sortLists(ListNode* l1, size);


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

    //auto ans = mergeTwoLists(&node1, &nodea);
    //ans;






}

ListNode* sortLists(ListNode* l1, int size)
{

    ListNode* newhead = NULL;
    ListNode* current = l1;
    ListNode* prev = l1;

    for (int i = 0; i < size; i++)
    {
        prev = current;
        for (int j = i; j < size; j++)
        {
            current = current->next;
            if (&(l1) >  &(current))
            {
                prev->next = current ->next;
                current->next = l1;
                l1 = current;



            }
            


        }
        l1 = l1->next;


    }






}