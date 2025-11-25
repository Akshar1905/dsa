///Count Leaf Nodes & Internal Nodes

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

struct Node* createNode(int value) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = value;
    node->left = node->right = NULL;
    return node;
}

int countLeaf(struct Node* root) {
    if (root == NULL) return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    return countLeaf(root->left) + countLeaf(root->right);
}

int countInternal(struct Node* root) {
    if (root == NULL) return 0;
    if (root->left == NULL && root->right == NULL)
        return 0;
    return 1 + countInternal(root->left) + countInternal(root->right);
}

int main() {
    struct Node* root = createNode(10);
    root->left = createNode(20);
    root->right = createNode(30);
    root->left->left = createNode(40);

    printf("Leaf nodes = %d\n", countLeaf(root));
    printf("Internal nodes = %d\n", countInternal(root));

    return 0;
}
