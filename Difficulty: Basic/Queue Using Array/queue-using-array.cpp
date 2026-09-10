class myQueue {
    int *arr;
    int front;
    int rear;
    int size;
    int currsize;

public:
    myQueue(int n) {
        size = n;
        arr = new int[n];
        front = -1;
        rear = -1;
        currsize = 0;
    }

    bool isEmpty() {
        return currsize == 0;
    }

    bool isFull() {
        return currsize == size;
    }

    void enqueue(int x) {

        if(isFull())
            return;

        if(isEmpty()) {
            front = rear = 0;
        }
        else {
            rear++;
        }

        arr[rear] = x;
        currsize++;
    }

    void dequeue() {

        if(isEmpty())
            return;

        if(front == rear) {
            front = rear = -1;
        }
        else {
            front++;
        }

        currsize--;
    }

    int getFront() {
        if(isEmpty())
            return -1;

        return arr[front];
    }

    int getRear() {
        if(isEmpty())
            return -1;

        return arr[rear];
    }
};