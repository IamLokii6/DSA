#ifndef STACK_H
#define STACK_H

#define SIZE 50
struct stack
{
    int top;
    char items[SIZE];
};
typedef struct stack stack;

stack* createStack();
int isFull(stack *stack);
int isEmpty(stack *stack);