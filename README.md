# Experiment 19
# Aim
To study and implement queue in c++

# Apparatus 
Vs code 

# Theory 
* Queues are a type of container adaptors that operate in a first in first out (FIFO) type of arrangement. Elements are inserted at the back (end) and are deleted from the front. Queues use an encapsulated object of deque or list (sequential container class) as its underlying container, providing a specific set of member functions to access its elements.
* The queue data structure follows the FIFO (First In First Out) principle where elements that are added first will be removed first.
# Code 
code 1
~~~
#include <iostream>
using namespace std;
int queue[100], n = 100, front = - 1, rear = - 1;
void Insert() {
   int val;
   if (rear == n - 1)
   cout<<"Queue Overflow"<<endl;
   else {
      if (front == - 1)
      front = 0;
      cout<<"Insert the element in queue : "<<endl;
      cin>>val;
      rear++;
      queue[rear] = val;
   }
}
void Delete() {
   if (front == - 1 || front > rear) {
      cout<<"Queue Underflow ";
      return ;
   } else {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;;
   }
}
void Display() {
   if (front == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = front; i <= rear; i++)
      cout<<queue[i]<<" ";
         cout<<endl;
   }
}
int main() {
   int ch;
   cout<<"1) Insert element to queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Display all the elements of queue"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter your choice : "<<endl;
      cin>>ch;
      switch (ch) {
         case 1: Insert();
         break;
         case 2: Delete();
         break;
         case 3: Display();
         break;
         case 4: cout<<"Exit"<<endl;
         break;
         default: cout<<"Invalid choice"<<endl;
      }
   } while(ch!=4);
   return 0;
}
~~~
![image](https://github.com/user-attachments/assets/f2e88907-6508-49ad-be4a-b50ef15544ad)

code 2 
~~~
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
~~~
![image](https://github.com/user-attachments/assets/8d85846e-e618-4d61-9314-cfe71bf4e816)

