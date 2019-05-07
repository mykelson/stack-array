#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>


#define CAPACITY 100


typedef struct _stack
{
    int test_array[CAPACITY];
    int top;
}
stack;


void push(stack* var, int n);
int pop();

stack s;

int main()
{
    
    s.top = -1;
    push(&s, 23);
    push(&s, 42);
    printf("%d popped from stack\n", pop(&s)); 
    printf("%d popped from stack\n", pop(&s)); 
    pop(&s);

}


void push(stack* var, int n)
{
    var->test_array[++var->top] = n;    

}

int pop(stack* valu)
{
    if(valu->top <= -1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
         return valu->test_array[valu->top--];    
    }
}