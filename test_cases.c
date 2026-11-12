#include <stdio.h>
#define SIZE 5
int stack[SIZE];
int top = -1;
void push(int item) {
    if (top == SIZE - 1) printf("Stack Overflow\n");
    else { top++; stack[top] = item; printf("Pushed: %d\n", item); }
}
int pop(void) {
    if (top == -1) { printf("Stack Underflow\n"); return -1; }
    int item = stack[top]; top--; return item;
}
void display(void) {
    if (top == -1) { printf("Stack is Empty\n"); return; }
    printf("Stack: ");
    for (int i = 0; i <= top; i++) printf("%d ", stack[i]);
    printf("\n");
}
int main(int argc, char **argv) {
    if (argc != 2) return 2;
    switch (argv[1][0]) {
        case '1': {
            puts("TEST 1 - BASIC LIFO");
            push(10); push(20);
            int item = pop(); printf("Returned: %d\n", item);
            display(); printf("Final top: %d\n", top);
            break;
        }
        case '2': {
            puts("TEST 2 - OVERFLOW");
            push(1); push(2); push(3); push(4); push(5); push(6);
            display(); printf("Final top: %d\n", top);
            break;
        }
        case '3': {
            puts("TEST 3 - UNDERFLOW");
            int item = pop(); printf("Returned: %d\n", item);
            printf("Final top: %d\n", top);
            break;
        }
        case '4': {
            puts("TEST 4 - FILL AND EMPTY");
            push(4); push(8); push(12);
            int a = pop(), b = pop(), c = pop();
            printf("Popped values: %d, %d, %d\n", a, b, c);
            display(); printf("Final top: %d\n", top);
            break;
        }
        default: return 3;
    }
    return 0;
}
