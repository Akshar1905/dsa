///Queue Using Two Stacks

#include <stdio.h>
#define MAX 100

int stack1[MAX], stack2[MAX];
int top1 = -1, top2 = -1;

void push1(int x) { stack1[++top1] = x; }
void push2(int x) { stack2[++top2] = x; }

int pop1() { return stack1[top1--]; }
int pop2() { return stack2[top2--]; }

void enqueue(int x) {
    push1(x);
}

int dequeue() {
    if (top1 == -1 && top2 == -1) {
        printf("Queue Underflow\n");
        return -1;
    }

    if (top2 == -1) {
        while (top1 != -1)
            push2(pop1());
    }

    return pop2();
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    printf("Dequeued: %d\n", dequeue());
    printf("Dequeued: %d\n", dequeue());

    enqueue(40);
    printf("Dequeued: %d\n", dequeue());

    return 0;
}
