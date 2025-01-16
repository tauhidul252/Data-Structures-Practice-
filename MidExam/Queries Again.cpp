#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
    Node(int val) : data(val), prev(0), next(0) {}
};

class DoublyLinkedList {
public:
    Node* head;
    Node* tail;

    DoublyLinkedList() : head(0), tail(0) {}

    void insertAt(int index, int value) {
        Node* newNode = new Node(value);
        if (index < 0) {
            cout << "Invalid" << endl;
            delete newNode;
            return;
        }

        if (index == 0) {
            if (head == 0) {
                head = tail = newNode;
            } else {
                newNode->next = head;
                head->prev = newNode;
                head = newNode;
            }
        } else {
            Node* current = head;
            int currentIndex = 0;

            while (current != 0 && currentIndex < index - 1) {
                current = current->next;
                currentIndex++;
            }

            if (current == 0) {
                cout << "Invalid" << endl;
                delete newNode;
                return;
            }

            newNode->next = current->next;
            newNode->prev = current;

            if (current->next != 0) {
                current->next->prev = newNode;
            } else {
                tail = newNode;
            }

            current->next = newNode;
        }

        printList();
    }

    void printList() {
        cout << "L -> ";
        Node* current = head;
        while (current != 0) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;

        cout << "R -> ";
        current = tail;
        while (current != 0) {
            cout << current->data << " ";
            current = current->prev;
        }
        cout << endl;
    }

    ~DoublyLinkedList() {
        Node* current = head;
        while (current != 0) {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }
};

int main() {
    DoublyLinkedList dll;
    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++) {
        int X, V;
        cin >> X >> V;
        dll.insertAt(X, V);
    }

    return 0;
}

