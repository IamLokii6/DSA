#ifndef STACK_H
#define STACK_H

#define SIZE 50
struct stack
{
    int top;
    int items[SIZE];
};
typedef struct stack stack;

stack *createStack();
int isFull(stack *stack);

void push(stack *stack, int data);

void printStack(stack *stack);

#endif.