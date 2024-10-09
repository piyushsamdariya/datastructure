#include<stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

void push(int e)
{
    if(top == MAX-1)
    {
        printf(" OVERFLOW \n");
    }
    else{
        top++;
        stack[top] = e;
        printf("%d has been pushed \n",e);
    }
}

void pop()
{
    if(top == -1)
    {
        printf(" UNDERFLOW \n");
    }
    else{
        int pop = stack[top];
        top--;
        printf("%d has been popped \n",pop);
    }
}

void display(){
    if(top == -1){
        printf("the stack is empty \n");
    }
    else{
        for(int i=0;i<=top;i++)
        {
            printf("%d \n",stack[i]);
        }
    }
}

int main()
{
    push(9);
    push(55);
    push(75);
    display();
    pop();
    pop();
    display();
}