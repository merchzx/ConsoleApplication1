#pragma once

class Node
{
public:
	int value;
	Node* next;
	Node() : value(0), next(nullptr){}
	Node(int value) : value(value), next(nullptr) {}
};

class forwardList
{
	Node* head;
	Node* tail;
public:
	forwardList() : head(nullptr),tail(nullptr) {}
	void PushBack(int value);
	void Print();
	void PopFront();
	void popBack();
};

