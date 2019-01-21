#ifndef SINGLYLINKEDLIST_H
#define SINGLYLINKEDLIST_H

#include <iostream>


struct Node
{
	int data;
	Node* next;
};

class SinglyLinkedList
{
public:
	SinglyLinkedList();

	void print() const;

	void push_back(int data);

	void push_front(int data);

	void pop_front();

	void pop_back();

	int front() const;

	int back() const;

	//removes all the elements in the linked list
	void clear();

	bool empty() const;

	void reverse();

	int getSize() const;

	~SinglyLinkedList();
private:
	Node* first;
	int size;
};

#endif