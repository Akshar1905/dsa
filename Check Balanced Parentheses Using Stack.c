///4. Check Balanced Parentheses Using Stack

#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) {
    stack[++top] = c;
}

char pop() {
    if (top == -1) return -1;
    return stack[top--];
}

int isMatching(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

int main() {
    char expr[MAX];
    printf("Enter expression: ");
    gets(expr);

    for (int i = 0; i < strlen(expr); i++) {
        if (expr[i] == '(' || expr[i] == '{' || expr[i] == '[')
            push(expr[i]);

        else if (expr[i] == ')' || expr[i] == '}' || expr[i] == ']') {
            char popped = pop();
            if (!isMatching(popped, expr[i])) {
                printf("Not Balanced\n");
                return 0;
            }
        }
    }

    if (top == -1)
        printf("Balanced\n");
    else
        printf("Not Balanced\n");

    return 0;
}
