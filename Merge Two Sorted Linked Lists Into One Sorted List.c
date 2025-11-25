///4. Merge Two Sorted Linked Lists Into One Sorted List

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Create new node
struct Node* newNode(int value) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = value;
    node->next = NULL;
    return node;
}

// Merge two sorted lists
struct Node* merge(struct Node* a, struct Node* b) {
    if (!a) return b;
    if (!b) return a;

    struct Node* result = NULL;

    if (a->data <= b->data) {
        result = a;
        result->next = merge(a->next, b);
    } else {
        result = b;
        result->next = merge(a, b->next);
    }

    return result;
}

// Display
void display(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
}

int main() {
    struct Node* a = newNode(1);
    a->next = newNode(3);
    a->next->next = newNode(5);

    struct Node* b = newNode(2);
    b->next = newNode(4);
    b->next->next = newNode(6);

    printf("List A: ");
    display(a);

    printf("\nList B: ");
    display(b);

    struct Node* merged = merge(a, b);

    printf("\nMerged Sorted List: ");
    display(merged);

    return 0;
}
