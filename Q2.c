// WAP to simulate the basic operation of stack
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 3 // Define MAX_SIZE based on user input
int stack[MAX_SIZE];
int top = -1;

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
    if (top == -1) 
	{
        printf("Stack is empty! UNDERFLOW.\n");
    } else {
        printf("Popped %d from the stack.\n", stack[top]);
        top = top - 1; // Decrement the top to remove the element
    		}
}

void display() 
{
	printf("Value of Top= ",top);
    // Display implementation
}
int main() {
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
                printf("POPED\n");
                pop();
                break;
            case 3:
                printf("Displayed\n");
                display();
                break;
            case 4:
                printf("Exited\n");
                break;
            default:
                printf("Invalid choice! Exiting...\n");
                exit(0);
        }
    } while (ch != 4);

    return 0;
}
