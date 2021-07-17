#include <iostream>
#include <string>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};
ListNode* sortLists(ListNode* l1, int size);


void main()
{
    //list A
    ListNode node1(5);
    ListNode node2(4);
    (&node1)->next = &node2;
    ListNode node3(3);
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

    auto ans = sortLists(&node1,5);
    //ans;






}

ListNode* sortLists(ListNode* l1, int size)
{

    ListNode* newhead = NULL;
    ListNode* current = l1;
    ListNode* prev = l1;

    for (int i = 0; i < size; i++)
    {
        cout << "i";
        prev = current;
        if (i == 4)
        {
            //
        }
        for (int j = i; j < size; j++)
        {
            cout << "j";

        }

        


    }




    return(l1);
   
}