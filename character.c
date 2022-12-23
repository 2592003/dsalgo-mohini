#include <stdio.h>

int binary_search(char arr[], int len, char target)
{
    int start = 0;
    int end = len - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (target == arr[mid])
        {
            return mid;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
    }
    printf("Ceil of character d is %c.", arr[start]);
}
int main()
{
    char arr[] = {'c', 'f', 'j'};
    char key = 'd';
    int len = 3;

    binary_search(arr, len, key);
    return 0;
}