#include <stdio.h>

#define MAX 10
int items[MAX];
int top = -1;

int isempty()
{
    if(top == -1)
    {
        //printf("Stack is Empty\n");
        return 1;
    }
    return 0;
}

int peek()
{
    return items[top];
}

int isfull()
{
    if(top == MAX){
        return 1;
    }
    return 0;
}

int push(int x)
{
    if(!isfull())
    {
        top = top + 1;
        items[top]=x;
    }
    else{
        printf("Stack is Full\n");
    }
}

int pop()
{
    int x;
    if(!isempty())
    {
        x = items[top];
        top = top-1;
        return x;
    }else{
        printf("Stack is Empty\n");
    }
    
}

void display()
{
    int i;
    for(i=0;i<=top;i++)
    {
        printf("%d\t", items[i]);
    }
}

int main()
{
    push(10);
    push(20);
    display();
    int x = pop();
    printf("Popped: %d\n", x);
    display();
    printf("")
}
