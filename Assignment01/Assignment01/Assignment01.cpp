#include "LinkedList.h"

using namespace std;

int main() {
	SingleLinkedList myList;
	myList.Push_Back(1);
	myList.Push_Back(15);
	myList.Push_Back(2);
	myList.Push_Back(14);
	myList.Push_Back(3);
	myList.Push_Back(13);
	myList.Push_Back(4);
	myList.Push_Back(12);
	myList.Push_Back(5);
	myList.Push_Back(11);
	myList.Push_Back(6);
	myList.Push_Back(10);
	myList.Push_Back(7);
	myList.Push_Back(9);
	myList.Push_Back(8);

	myList.Show();
//	cout << "List size: " << myList.Size() << endl;
	myList.bubblesort();
	myList.Show();


	//myList.Push_Front(9);
	//myList.Show();

//	cout << "myList[2] = " << myList.At(2) << endl;

	//myList.Remove(5);
	//myList.Show();

	// myList.Clear();
	//myList.Show();


	// CODE FROM LECTURE NOTE
	//Node* head = myList.Show_head();
	//myList.Show_rec(head);


	return 0;  // END OF MAIN

}