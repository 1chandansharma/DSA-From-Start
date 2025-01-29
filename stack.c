// WAP to simulate the basic operation of stack
#include <stdio.h>
#include <stdlib.h>

int *stack;
int i,top = -1;
int MAX_SIZE;
void push() {
    // Push implementation
    int value;
    if (top == MAX_SIZE - 1) {
        printf("Stack is full! OVERFLOW.\n");
    } else {
        printf("Enter the value to push: ");
        scanf("%d", &value);
        top = top + 1;
        stack[top] = value;
        printf("Pushed %d onto the stack.\n", value);
    }
} // Closing brace for push()

void pop() {
    if (top == -1) {
        printf("Stack is empty! UNDERFLOW.\n");
    } else {
        printf("Popped %d from the stack.\n", stack[top]);
        top = top - 1; // Decrement the top to remove the element
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements are: ");
        for (i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    printf("Implementation of stack \nCompiled by Chandan\n");
    printf("Enter the size of stack: ");
    scanf("%d", &MAX_SIZE);

    // Allocate memory for the stack
    stack = (int *)malloc(MAX_SIZE * sizeof(int));
    if (stack == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    int ch;
    do {
        printf("Enter your choice: \n1.Push\n2.POP\n3.Display\n4.Exit ");
        printf("\nChoice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exited\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (ch != 4);

    // Free the allocated memory
    free(stack);

    return 0;
}

