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