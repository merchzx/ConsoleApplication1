#include "forwardList.h"
#include <iostream>
using namespace std;

void forwardList::PushBack(int value)
{

	if (head and tail) {
		Node* new_node = new Node(value);
		tail->next = new_node;
		tail = new_node;
	}
	else {
		Node* new_node = new Node(value);
		head = new_node;
		tail = new_node;
	}
}

void forwardList::Print()
{
	if (head && tail) {
		Node* current = head;
		while (current!=nullptr)
		{
			cout << current->value << endl;
			current = current->next;
		}
	}
}

void forwardList::PopFront()
{
	if (head and tail) {
		Node* temp = head->next;
		delete head;
		if (!temp) {
			tail = temp;
		}
		head = temp;
	}
}

void forwardList::popBack()
{
}
