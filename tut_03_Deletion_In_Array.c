#include<stdio.h>

void display(int arr[], int size){
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int deletion(int arr[], int size, int index){
    if(size<0){
        printf("Array is Empty\n");
        return -1;
    }

    for(int i=index; i<size-1; i++){
        arr[i] = arr[i+1];
    }

    return 1;

}

int main(){
    int arr[100]={7, 8, 12, 27, 88};
    int size = 5, index = 0;

    display(arr, size);
    int status = deletion(arr, size, index);
    size -= 1;
    if(status==1){
        display(arr, size);
    }else{
        printf("Deletion Failed!");
    }

    return 0;
}