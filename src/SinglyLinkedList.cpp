#include "SinglyLinkedList.h"

SinglyLinkedList::SinglyLinkedList() : first(nullptr), size(0)
{
}

void SinglyLinkedList::print() const
{
	Node* temp = first;
	while (temp != nullptr)
	{
		std::cout << temp->data << " ";
		temp = temp->next;
	}
}

void SinglyLinkedList::push_back(int data)
{
	if (first == nullptr)
	{
		first = new Node;
		first->data = data;
		first->next = nullptr;
	}
	else
	{
		Node* temp = first;
		while (temp->next != nullptr)
		{
			temp = temp->next;
		}

		temp->next = new Node;
		temp = temp->next;
		temp->data = data;
		temp->next = nullptr;
	}

	++size;
}

void SinglyLinkedList::push_front(int data)
{
	if (first == nullptr)
	{
		first = new Node;
		first->data = data;
		first->next = nullptr;
	}
	else
	{
		Node* temp = new Node;
		temp->data = data;
		temp->next = first;
		first = temp;
	}

	++size;
}

void SinglyLinkedList::pop_front()
{
	if (first != nullptr)
	{
		Node* temp = first;
		first = first->next;
		delete temp;
		--size;
	}
}

void SinglyLinkedList::pop_back()
{
	if (first != nullptr)
	{
		Node* current = nullptr;
		Node* next = first;
		while (next->next != nullptr)
		{
			current = next;
			next = next->next;
		}

		if (current == nullptr) //the list only had one element
		{
			delete first;
			first = nullptr;
		}
		else
		{
			current->next = nullptr;
			delete next;
		}
		--size;
	}
}

int SinglyLinkedList::front() const //assumes there is at least one number in the list
{
	return first->data;
}

int SinglyLinkedList::back() const //assumes there is at least one number in the list
{
	Node* temp = first;
	while (temp->next != nullptr)
	{
		temp = temp->next;
	}
	return temp->data;
}

void SinglyLinkedList::clear()
{
	Node* temp = first;
	while (temp != nullptr)
	{
		first = first->next;
		delete temp;
		temp = first;
	}
	size = 0;
}

bool SinglyLinkedList::empty() const
{
	return size == 0;
}

void SinglyLinkedList::reverse()
{
	if (size > 1)
	{
		Node* current = first->next;
		Node* next = current;
		first->next = nullptr;
		while (current != nullptr)
		{
			next = next->next;
			current->next = first;
			first = current;
			current = next;
		}
	}
}

int SinglyLinkedList::getSize() const
{
	return size;
}

SinglyLinkedList::~SinglyLinkedList()
{
	clear();
}