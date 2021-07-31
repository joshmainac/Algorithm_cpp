#include <iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
	
};

bool hasCycle(ListNode* head);
int main()
{
	ListNode a(3);
	ListNode b(2);
	ListNode c(0);
	ListNode d(-4);
	a.next = &b;
	b.next = &c;
	c.next = &d;
	d.next = &b;


	hasCycle(&a);






	return 0;
}

bool hasCycle(ListNode* head)
{
	if (head == NULL || head->next == NULL) return false;
	ListNode* slow = head, * fast = head;
	while (fast->next && fast->next->next) {
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow) {
			return true;
		}
	}
	return false;

}