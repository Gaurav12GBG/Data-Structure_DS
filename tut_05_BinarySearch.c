#include <stdio.h>

int binarySearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size-1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    // for binary search we have to maintain low, mid and high and also array should be sorted.
    int arr[] = {1, 3, 33, 56, 454, 787, 1001, 1586, 1812, 2025, 3222};
    int size = sizeof(arr) / sizeof(int);
    // printf("size=%d\n", size);

    int element = 454;
    int searchIndex = binarySearch(arr, size, element);
    if (searchIndex != -1)
    {
        printf("The element %d is found at %d position.", element, searchIndex);
    }else{
        printf("Element Not Found...");
    }
    return 0;
}