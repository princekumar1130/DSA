#include <stdio.h>
#include<stdlib.h>

#define MAX 100
int stack[MAX],top = -1;
int i;

void push(int value)
{
    if (top == MAX - 1)
    {
        printf("stack overflow! unable to push %d\n", value);
    }
    else
    {
        top++;
        stack[top] = value;
        printf("%d push to stack\n", value);
    }
}

void pop()
{
    if (top == -1)
    {
        printf("stack underflow! unable to pop\n");
    }
    else
    {
        printf("%d popped from stack\n", stack[top]);
        top--;
    }
}


void display()
{
    if (top == -1)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("stack elements are = ");
        for (i = top; i >= 0; i--)
        {
            printf("%d", stack[i]);
        }
        printf("\n");
    }
}

int main()
{
    int choice, value;
    while (1)
    {
        printf("\nstack operations = \n");
        printf("1. push\n2. pop\n3. display\n4. exit\n");
        printf("enter your choice = ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("enter the value to be pushed = ");
            scanf("%d",&value);
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("invalud choice please try again.\n");
        }
    }
    return 0;
}
