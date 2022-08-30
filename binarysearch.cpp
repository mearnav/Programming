#include <iostream>
using namespace std;
int BinarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return BinarySearch(arr, l, mid - 1, x);
    }
    return -1;
}

int main()
{
    int arr[] = {2, 4, 5, 7, 8, 10, 25, 26, 34};
    int x = 8;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = BinarySearch(arr, 0, n - 1, x);
    (result == -1)
        ? cout << "Element is not present in array";
    : cout<<"Element is present at position "<<result;
    return 0;
}