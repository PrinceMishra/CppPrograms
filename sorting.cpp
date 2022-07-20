#include <iostream>
using namespace std;

void simpleSort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp;
            if (arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void bubbleSort(int *arr, int n)
{
    int tillNum = 1;
    while (tillNum < n - 1)
    {
        for (int i = 0; i < n - tillNum; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        tillNum++;
    }
}
int main()
{
    int n, arr[5];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // simpleSort(arr,n);
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}