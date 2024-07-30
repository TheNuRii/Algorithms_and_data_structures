#include <iostream>

class Node {
public:
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

class Queue {
private:
    Node* head;
    Node* tail;
    int size;

public:
    Queue() : head(nullptr), tail(nullptr), size(0) {}

    ~Queue() {
        while (!isEmpty()) {
            dequeue();
        }
    }

    void enqueue(int value) {
        Node* newNode = new Node(value);
        if (tail == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        size++;
    }

    void dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty" << std::endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head == nullptr) {
            tail = nullptr;
        }
        delete temp;
        size--;
    }

    int peek() {
        if (isEmpty()) {
            std::cerr << "Queue is empty" << std::endl;
            exit(EXIT_FAILURE);
        }
        return head->data;
    }

    bool isEmpty() {
        return head == nullptr;
    }

    int getSize() {
        return size;
    }

    void display() {
        if (isEmpty()) {
            std::cout << "Queue is empty" << std::endl;
            return;
        }
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    std::cout << "Queue elements: ";
    q.display();

    std::cout << "Front element is: " << q.peek() << std::endl;

    q.dequeue();
    std::cout << "Queue elements after dequeue: ";
    q.display();

    std::cout << "Front element is: " << q.peek() << std::endl;

    return 0;
}
