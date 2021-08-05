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
 
int main()
{
    ListNode a(1);
    ListNode b(2);
    ListNode c(3);
    ListNode d(3);
    ListNode e(3);
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;









	return 0;
}