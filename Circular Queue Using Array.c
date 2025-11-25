///Circular Queue Using Array

#include <stdio.h>
#define MAX 5

int cq[MAX];
int front = -1, rear = -1;

void enqueue(int value) {
    if ((rear + 1) % MAX == front) {
        printf("Circular Queue Overflow\n");
        return;
    }

    if (front == -1) front = 0;

    rear = (rear + 1) % MAX;
    cq[rear] = value;
}

void dequeue() {
    if (front == -1) {
        printf("Circular Queue Underflow\n");
        return;
    }

    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % MAX;
    }
}

void display() {
    if (front == -1) {
        printf("Circular Queue empty\n");
        return;
    }

    int i = front;
    while (1) {
        printf("%d ", cq[i]);
        if (i == rear) break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    display();

    dequeue();
    dequeue();

    display();

    enqueue(50);
    enqueue(60);

    display();

    return 0;
}
