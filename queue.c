// WAP to simulate the basic operation of queue
#include <stdio.h>
#include <stdlib.h>

int *queue;
int i,front = -1, rear = -1;
int MAX_SIZE;

void enqueue() {
    int value;
    if (rear == MAX_SIZE - 1) {
        printf("Queue is full! OVERFLOW.\n");
    } else {
        printf("Enter the value to enqueue: ");
        scanf("%d", &value);
        if (front == -1) {
            front = 0; // Initialize front on first enqueue
        }
        rear = rear + 1;
        queue[rear] = value;
        printf("Enqueued %d onto the queue.\n", value);
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty! UNDERFLOW.\n");
    } else {
        printf("Dequeued %d from the queue.\n", queue[front]);
        front = front + 1; // Increment front to remove the element
        if (front > rear) {
            front = rear = -1; // Reset the queue if it becomes empty
        }
    }
}

void display() {
    if (front == -1) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements are: ");
        for (i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
	printf("Implementation of queue \nCompiled by Chandan\n");
    printf("Enter the size of queue: ");
    scanf("%d", &MAX_SIZE);
    queue = (int *)malloc(MAX_SIZE * sizeof(int));
    if (queue == NULL) {
        printf("Memory allocation failed!\n");
        return -1;
    }

    int ch;
    do {
        printf("Enter your choice: \n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit ");
        printf("\nChoice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
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

    free(queue); // Free allocated memory
    return 0;
}
