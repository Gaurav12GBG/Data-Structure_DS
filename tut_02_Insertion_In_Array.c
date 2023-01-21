#include <stdio.h>
#include <stdlib.h>

void display(int arr[], int n)
{
    // Traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int insertion(int arr[], int size, int element, int capacity, int index)
{
    // insertion
    if (size >= capacity)
    {
        printf("Array is Full\n");
        return -1;
    }

    // shifting the elements as per requirement
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[index] = element;
    return 1;
}

int main()
{

    /*
    Array ADT Operations:
    1. Traversal : Visiting every element of an array once.
    2. Insertion
    3. Deletion
    4. searching

    */
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, element = 45, index = 3;

    display(arr, size);
    int status = insertion(arr, size, element, 100, index);
    size += 1;

    if (status == 1)
    {
        display(arr, size);
    }
    else{
        printf("Insertion Failed!");
    }

    return 0;
}
