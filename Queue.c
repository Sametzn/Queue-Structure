#include<stdlib.h>
#include<stdio.h>

int front = -1, rear = -1;

void enQueue(int data, int length, int array[]) {
    if (rear + 1 == length)
        printf("Queue is Full!! \n");
    else {
        if (front == -1)
            front = 0;
        rear += 1;
        array[rear] = data;
    }
}

void deQueue(int array[]) {
    if (rear == front) {
        printf("Queue is Empty\n");
        front = -1;
        rear = -1;
    } else {
        if (front == -1)
            printf("Queue is Empty\n");
        else {
            array[front] = 0;
            front += 1;
        }
    }
}

void listing(int array[]) {
    if (rear == -1)
        printf("Queue is Empty\n");
    else {
        for (int i = 0; i <= rear; ++i) {
            printf("%4d", array[i]);
        }
        printf("\n");
    }
}

void Clear(int array[]) {
    for (int i = 0; i <= rear; ++i) {
        array[i] = 0;
    }
    front = -1;
    rear = -1;
    printf("Queue is Empty\n");
}

void screenClear() {
    system("cls");
}

int main() {
    int proc, data, length;
    printf("Enter the length of the queue \n");
    scanf("%d", &length);
    int array[length];
    screenClear();
    while (1) {
        printf("******MENU******\n");
        printf("   1)EnQueue\n");
        printf("   2)DeQueue\n");
        printf("   3)Listing\n");
        printf("   4)Clear\n");
        printf("   5)Exit\n");
        printf("****************\n");
        printf("Select the action you want to take :");
        scanf("%d", &proc);
        screenClear();
        switch (proc) {
            case 1:
                printf("Enter the number you want to add:");
                scanf("%d", &data);
                screenClear();
                enQueue(data, length, array);
                break;
            case 2:
                deQueue(array);
                break;
            case 3:
                listing(array);
                break;
            case 4:
                Clear(array);
                break;
            case 5:
                printf("Thank you.. See you again :)))");
                exit(0);
            default:
                printf("You made the wrong choice!! Try again \n");
                break;
        }
    }
}
