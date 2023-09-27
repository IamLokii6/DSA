#include "stack.h"
#include<stdio.h>
#include<stdlib.h>

//create stack
struct stack* createStack(){
        stack *s = (stack *)malloc(sizeof(stack));
        s->top = -1;
        return s;
}

int isFull(stack *stack){
    if(stack->top==SIZE-1){
        return 1;
    }
    else 
    return 0;
    
}


int isEmpty(stack *stack){
    if(stack->top==-1){
        return 1;
    }
    else
    return 0;
}