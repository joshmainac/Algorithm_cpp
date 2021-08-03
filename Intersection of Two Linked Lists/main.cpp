#include <iostream>
using namespace std;

//Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {

        ListNode *pos1 = headA;
        ListNode *pos2 = headB;
        while (1)
        {
            if(pos1 == )

            if (pos1 != nullptr)
            {
                pos1 = pos1->next;
            }
            else
            {
                pos1 = headB;
            }
            
            if (pos1 != nullptr)
            {
                pos2 = pos2->next;
            }
            else
            {
                pos2 = headA;
            }
            




        }


    }
};

int main()
{
    ListNode a1(4);
    ListNode b1(1);
    ListNode cc(8);
    ListNode dd(4);
    ListNode ee(5);
    ListNode a2(5);
    ListNode b2(6);
    ListNode c2(1);
    a1.next = &b1;
    b1.next = &cc;
    a2.next = &b2;
    b2.next = &c2;
    c2.next = &cc;
    cc.next = &dd;
    dd.next = &ee;


















	return 0;
}