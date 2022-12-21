#include <stdio.h>

int binary_search(int arr[], int len, int target)
{
    /*
    s = start , e = end , m= middle element.
    */
    int s = 0;
    int e = len - 1;
    while (s <= e)
    {
        int m = (s + e) / 2;
        if (target == arr[m])
        {
            return m;
        }
        else if (target < arr[m])
        {
            e = m - 1;
        }
        else if (target > arr[m])
        {
            s = m + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {12, 14, 16, 18, 19, 20, 22};
    int target = 100;
    int len = sizeof(arr) / sizeof(arr[0]);

    printf("The Element 100 found at index %d.",binary_search(arr, len, target));
    return 0;
}