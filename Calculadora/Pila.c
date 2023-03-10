#include <stdio.h>

#define SIZE 10

#define Red "\x1b[31m"
#define M "\x1b[35m"
#define Re "\x1b[0m"

int top = -1;
double inp_array[SIZE];
void push();
void pop();
void show();
int size();
double lastelement();

void push(double a)
{
    top = top + 1;
    inp_array[top] = a;
}

void pop()
{
    if (top != -1)
    {
        top = top - 1;
    }
}

void show()
{
    int x = SIZE;
    for (int i = (top - SIZE) + 1; i <= top; ++i)
    {
        printf(M"%d"Re":\t%f\n", x, inp_array[i]);
        x = x - 1;
    }
    printf("\n");
}

void wipe()
{
    for (int i = 0; i < 10; i++)
    {
        inp_array[i] = 0;
    }
}

int size()
{
    return top;
}

int length()
{
    return SIZE;
}

double lastelement(){
    return inp_array[top];
}