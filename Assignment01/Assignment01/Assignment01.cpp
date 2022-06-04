#include "LinkedList.h"

using namespace std;

int main() {
	SingleLinkedList myList;
	myList.Push_Back(5);
	myList.Push_Back(10);
	myList.Push_Back(3);
	myList.Push_Back(5);

	myList.Show();
	cout << "List size: " << myList.Size() << endl;

	myList.Push_Front(9);
	myList.Show();

	cout << "myList[2] = " << myList.At(2) << endl;

	myList.Remove(5);
	myList.Show();

	myList.Clear();
	myList.Show();

	return 0;

}