#include <iostream>
#include <queue>

using namespace std;

class CircularQueue {
private:
    queue<int> q;
    int size;
public:
    CircularQueue(int size) {
        this->size = size;
    }

    bool isFull() {
        return (q.size() == size);
    }

    bool isEmpty() {
        return q.empty();
    }

    void enqueue(int data) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue." << endl;
        } else {
            q.push(data);
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
        } else {
            q.pop();
        }
    }

    int front() {
        if (isEmpty()) {
            cout << "Queue is empty. No front element." << endl;
            return -1;
        } else {
            return q.front();
        }
    }

    int rear() {
        if (isEmpty()) {
            cout << "Queue is empty. No rear element." << endl;
            return -1;
        } else {
            return q.back();
        }
    }
};

int main() {
    CircularQueue cq(5);
    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.enqueue(40);
    cq.enqueue(50);
    cq.enqueue(60);
    cout << "Front element: " << cq.front() << endl;
    cout << "Rear element: " << cq.rear() << endl;
    cq.dequeue();
    cq.dequeue();
    cq.enqueue(60);
    cout << "Front element: " << cq.front() << endl;
    cout << "Rear element: " << cq.rear() << endl;
    return 0;
}
