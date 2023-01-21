#include<stdio.h>
#include<stdlib.h>

int stack[100], top, size, i=0;

void push(){
    int data;
    printf("Enter data:\n");
    scanf("%d", &data);

    top++;
    stack[top] = data;
}

void pop(){
    printf("popped element is %d\n", stack[top]);
    top--;
}

void peek(){
    printf("After peek operations:%d\n", stack[0]);
}

void display(){
    printf("The elements in a stack:\n");
    for(i = top; i>=0; i--){
        printf("%d ", stack[i]);
    }
    printf(" ");
}
int main(){
   
   top = -1;
   size = 5;

   push();
   push();
   push();
   push();
   push();
   pop();
   peek();
   display();


    return 0;
}