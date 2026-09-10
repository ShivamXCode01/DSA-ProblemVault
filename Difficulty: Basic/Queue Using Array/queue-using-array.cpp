class myQueue {
    int *arr;
    int front;
    int rear;
    int size;

public:
    myQueue(int n) {
        size = n + 1;              // one extra slot
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    bool isEmpty() {
        return front == rear;
    }

    bool isFull() {
        return (rear + 1) % size == front;
    }

    void enqueue(int x) {
        if (isFull())
            return;

        arr[rear] = x;
        rear = (rear + 1) % size;
    }

    void dequeue() {
        if (isEmpty())
            return;

        front = (front + 1) % size;
    }

    int getFront() {
        if (isEmpty())
            return -1;

        return arr[front];
    }

    int getRear() {
        if (isEmpty())
            return -1;

        return arr[(rear - 1 + size) % size];
    }
};
