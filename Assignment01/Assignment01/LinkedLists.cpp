#include "LinkedList.h"

void SingleLinkedList::Push_Front(DataType _value) {
    Node* node = new Node;   // defined in .h as structure

    node->data = _value;    // since node is pointer so when we input value, use arrow (->)
    node->next = nullptr;    // null pointer value

    if (head == nullptr) {
        head = node;
    }
    else {
        node->next = head;  // the existing head must be next after new head
        head = node;        // assign node to head
    }
}

void SingleLinkedList::Push_Back(DataType _value) {
    Node* tail = head;
    Node* node = new Node;

    node->data = _value;
    node->next = nullptr;

    if (head == nullptr)
    {
        head = node;
    }
    else {
        while (tail->next != nullptr) {
            tail = tail->next;
        }
        tail->next = node;
    }
}

void SingleLinkedList::Pop_Front() {
    Node* cur = head;
    head = cur->next;

    delete cur;
}

void SingleLinkedList::Pop_Back() {
    Node* cur = head;
    Node* prev = head;
}

void SingleLinkedList::Remove(DataType _value) {
    if (head == nullptr) {
        std::cout << "List is empty" << std::endl;
        return;
    }

    Node* cur = head;
    Node* prev = cur;

    while (cur != nullptr) {
        if (cur->data == _value) {
            if (cur == head) {
                Pop_Front();
                cur = head;
                prev = cur;
            }
            else {
                prev->next = cur->next;

                delete cur;
                cur = prev->next;
            }
        }
        else {
            prev = cur;
            cur = cur->next;
        }
    }
}

void SingleLinkedList::Insert(int idx, DataType _value) {
    if (idx > Size() || idx < 0) {
        std::cout << "Invalid index number" << std::endl;
        return;
    }
    else if (idx == 0) {
        Push_Front(_value);
        return;
    }
    else if (idx == Size()) {
        Push_Back(_value);
        return;
    }

    Node* cur = head;
    Node* prev = head;
    Node* node = new Node;

    node->data = _value;
    node->next = nullptr;

    for (int i = 0; i < idx; i++) {
        prev = cur;
        cur = cur->next;
    }

    prev->next = node;
    node->next = cur;
}

void SingleLinkedList::Clear() {
    Node* cur = head;

    while (cur != nullptr) {
        head = cur->next;

        delete cur;
        cur = head;
    }
}

void SingleLinkedList::Show() {
    if (head == nullptr) {
        std::cout << "List is empty" << std::endl;
        return;
    }

    Node* node = head;

    std::cout << "List elements: ";

    while (node != nullptr) {
        std::cout << node->data << " ";
        node = node->next;
    }

    std::cout << std::endl;
}

DataType SingleLinkedList::At(int idx) {
    if (idx > Size() || idx < 0) {
        std::cout << "Invalid index number" << std::endl;
        return NULL;
    }

    Node* cur = head;

    for (int i = 0; i < idx; i++) {
        cur = cur->next;
    }

    return cur->data;
}

int SingleLinkedList::Size() {
    if (head == nullptr) {
        return 0;
    }

    Node* cur = head;
    int size = 0;

    while (cur != nullptr) {
        size++;
        cur = cur->next;
    }

    return size;
}