#include <stdio.h>

int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[20] = {1, 3, 56, 33, 454, 787, 89, 100, 9, 33};
    int size = sizeof(arr) / sizeof(int);
    int element = 414;
    int searchIndex = linearSearch(arr, size, element);
    if (searchIndex != -1)
    {
        printf("The element %d is found at %d position.", element, searchIndex);
    }else{
        printf("Element Not Found...");
    }
    return 0;
}