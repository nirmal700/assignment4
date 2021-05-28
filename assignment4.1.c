#include <stdio.h>
#include <stdlib.h>
int stack[50], top = -1, size;
void push();
void pop();
void peep();
void display();

int main()
{
    int choice;
    printf("\nEnter the size of the stack");
    scanf("%d", &size);
    while (1)
    {
        printf("\nEnter 1 to push");
        printf("\nEnter 2 to pop");
        printf("\nEnter 3 to display");
        printf("\nEnter 4 to exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
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
            exit(0);
            break;
        default:
            printf("\nWrong Choice");
            break;
        }
    }
}
void push()
{
    int item;
    if (top == size - 1)
    {
        printf("\nStack Overflow");
    }
    else
    {
        printf("\nEnter the element ");
        scanf("%d", &item);
        top++;
        stack[top] = item;
    }
}
void pop()
{
    int item;
    if (top == -1)
    {
        printf("\nStack Underflow");
    }
    else
    {
        item = stack[top];
        top--;
        printf("\nThe popped Value is : %d", item);
    }
}
void peep()
{
    if(top==-1)
    {
        printf("\nStack Underflow");
    }
    else
    {
        printf("The peeped value is : %d",stack[top]);
    }
}
void display()
{
    int i;
    if (top == -1)
    {
        printf("\nStack Underflow");
    }
    else
    {
        for (i = 0; i <= top; i++)
        {
            printf("\n%d", stack[i]);
        }
    }
}