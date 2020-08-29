#include <stdio.h>

#define MAX 10
int items[MAX];
int front = 0;
int rear=-1;
int count = 0;


int isempty()
{
    if (count==0){
        return 1;
    }
    return 0;
}

int peek()
{
    return items[front];
}

int isfull()
{
    if(count == MAX)
    {
        return 1;
    }
    return 0;
}

void enqueue(int x)
{
    if(!isfull())
    {
        rear++;
        count++;
        items[rear] = x;    
    }
    else 
    printf("Queue full\n");
    
}

void deque()
{
    if(!isempty())
    {
        int x = items[front];
        front = front + 1;
        count--;
    }
    else{
        printf("Queue empty\n");
    }
}


int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    int x = peek();
    printf("%d\n", x);
    deque();
    deque();
    deque();
    x = peek();
    printf("%d", x);
    return 0;
}
