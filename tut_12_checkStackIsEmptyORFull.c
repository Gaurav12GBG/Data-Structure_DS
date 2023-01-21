#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
    int * arr;
};

int isFull(struct stack * ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }
    return 0;
}

int isEmpty(struct stack *ptr){
   if(ptr->top == -1){
        return 1;
    }
    return 0;
}

int main(){

    struct stack * sp;
    sp->size = 5;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));

    printf("Stack is Full: %d\n", isFull(sp));
    printf("Stack is Empty: %d\n", isEmpty(sp));

    return 0;
}