// Sreejita Bhardwaj
// Entc b
// Exp 19: queue

#include <iostream>
using namespace std;
#define size 5
#define ERROR -9999

class Queue {
    int rear, front, arr[size];
public:
    Queue() {
        rear = -1;
        front = -1;
    }

    void enqueue(int);
    int dequeue();
    void disp();
};

void Queue::enqueue(int num) {
    if (rear == size - 1) { // Corrected the full condition
        cout << "Queue is full" << endl;
    } else {
        if (front == -1) { // Initialize front when inserting the first element
            front = 0;
        }
        arr[++rear] = num;
    }
}

int Queue::dequeue() {
    if (front == -1 || front > rear) { // Corrected empty condition
        cout << "Queue is empty" << endl;
        return ERROR;
    } else {
        return arr[front++];
    }
}

void Queue::disp() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    Queue q1;
    q1.enqueue(4);
    q1.enqueue(8);
    q1.enqueue(3);
    q1.disp();
    int val = q1.dequeue();
    cout << "Deleted element: " << val << endl;
    q1.disp();
}

