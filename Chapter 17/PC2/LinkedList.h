#include <iostream>
using namespace std;

class LinkedList
{
protected:
	struct ListNode
	{
		double value;
		ListNode *next;
		ListNode(double value1, ListNode *next1 = NULL)
		{
			value = value1;
			next = next1;
		}
	};
	ListNode *head;
public:
	LinkedList(){ head = NULL; }
	void add(double x);
	bool isMember(double x);
	
	LinkedList(const LinkedList& original);
private:
	static ListNode* copyList(ListNode *aList);
};


void LinkedList::add(double x)
{
	if (head == NULL)
		head = new ListNode(x);
	else
		head = new ListNode(x, head);
}

bool LinkedList::isMember(double x)
{
	ListNode *ptr = head;
	while (ptr != NULL)
	{
		if (ptr->value == x)
			return true;
		ptr = ptr->next;
	}
	return false;
}


LinkedList::LinkedList(const LinkedList& original)
{
	head = copyList(original.head);
}


LinkedList::ListNode *
LinkedList::copyList(ListNode *aList)
{
	if (aList == NULL)
		return NULL;
	else
	{
		
		ListNode *tailCopy = copyList(aList->next);
	
		return new ListNode(aList->value, tailCopy);
	}
}

