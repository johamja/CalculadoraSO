#include <stdio.h>

#define SIZE 9

int top = -1, inp_array[SIZE];
void push();
void pop();
void show();

void push(int a)
{

    if (top == SIZE - 1)
    {
        printf("\nOverflow!!");
    }
    else
    {
        top = top + 1;
        inp_array[top] = a;
    }
}

void pop()
{
    if (top == -1)
    {
    }
    else
    {
        top = top - 1;
    }
}

void show()
{
    int x = SIZE + 1;
    for (int i = (top - SIZE); i <= top; ++i)
    {
        printf("%d:\t%d\n", x, inp_array[i]);
        x = x - 1;
    }
    printf("\n");
}