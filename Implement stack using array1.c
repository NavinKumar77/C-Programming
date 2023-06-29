#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100
int top = -1;

void push(int data, int stack_arr[]) {
    top++;
    stack_arr[top] = data;
}

void pop(int stack_arr[]) {
    if (top == -1)
        exit(1);
    top--;
}

void print(int stack_arr[]) {
    if (top == -1)
        return;
    int i;
    for (i = 0; i <= top; i++)
        printf("%d\n", stack_arr[i]);
}
int main() {
    int n, data;
    char op[10];

    scanf("%d", &n);
    int stack_arr[MAX_SIZE];

    for (int i = 0; i < n; i++) {
        scanf("%s", op);

        if (strcmp(op, "Push") == 0 || strcmp(op, "push") == 0) {
            scanf("%d", &data);
            push(data, stack_arr);
        } else if (strcmp(op, "Pop") == 0 || strcmp(op, "pop") == 0) {
            pop(stack_arr);
        } else if (strcmp(op, "Print") == 0 || strcmp(op, "print") == 0) {
            print(stack_arr);
        }
    }

    return 0;
}
