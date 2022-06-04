// LinkedList.h
#pragma once
#include <iostream>

typedef int DataType;	//define data type

struct Node				// Node structure
{
	DataType data;
	Node* next;
};

class SingleLinkedList
{
private:
	Node* head;
public:
	SingleLinkedList() : head(nullptr) {}	//constructor , ':' means initialized list. It plays a role to make a member variable (head) initilized with specified value (nullptr)
	~SingleLinkedList() {}					//destructor

public:
	void Push_Front(DataType _value);		// Add data (Front)
	void Push_Back(DataType _value);		// Add data (Rear)
	void Pop_Front();						// delete data (Front)
	void Pop_Back();						// delete data (Rear)
	void Remove(DataType _value);			// Remove all data with _value
	void Insert(int idx, DataType _value);	// Insert data
	void Clear();							// Delete list
	void Show();							// Print list
	Node* Show_head();	// Show head in the specified list

	DataType At(int idx);					// Return value at idx
	int Size();								// Return whole size of list
		
	// From the LECTURE NOTE CODE
	void Show_rec(Node* head);						// Recursive Call form
};
