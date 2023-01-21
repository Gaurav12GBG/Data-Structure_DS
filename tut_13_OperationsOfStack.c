#include<stdio.h>
#include<stdlib.h>

struct stack{
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


int isEmpty(struct stack * ptr){
    if(ptr->top == -1){
        return 1;
    }
    return 0;
}

void push(struct stack *ptr, int val){
    if(isFull(ptr)){
        printf("Stack Overflow! Cannot push %d into the stack.\n", val);
    }

    ptr->top++;
    ptr->arr[ptr->top] = val;
}

int pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("Stack is Empty! Cannot pop from the stack.\n");
        return -1;
    }

    int val = ptr->arr[ptr->top];
    ptr->top--;
    return val;
}

int main(){

    struct stack *sp = (struct stack *)malloc(sp->size * sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));

    push(sp, 1);
    push(sp, 18);
    push(sp, 12);
    push(sp, 19);
    push(sp, 82);
    push(sp, 32);
    push(sp, 22);
    push(sp, 11);
    push(sp, 82);
    push(sp, 99);
    // push(sp, 12);

    printf("Popped %d from the stack.\n",pop(sp));
    printf("Popped %d from the stack.\n",pop(sp));
    printf("Popped %d from the stack.\n",pop(sp));

    return 0;
    
}