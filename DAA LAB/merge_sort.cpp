#include <iostream>
using namespace std;

class mergeSort
{
public:
    void merge(int arr[], int low, int mid, int high)
    {
        int one = mid - low + 1;
        int two = high - mid;

        int leftarr[one];
        int rightarr[two];

        int i = 0;
        for (i = 0; i < one; i++)
        {
            leftarr[i] = arr[low + i];
        }
        for (i = 0; i < two; i++)
        {
            rightarr[i] = arr[mid + 1 + i];
        }

        int ione = 0;
        int itwo = 0;
        int imerge = low;

        while (ione < one && itwo < two)
        {
            if (leftarr[ione] <= rightarr[itwo])
            {
                arr[imerge] = leftarr[ione];
                ione++;
            }
            else
            {
                arr[imerge] = rightarr[itwo];
                itwo++;
            }
            imerge++;
        }
    }

    void sort(int arr[], int low, int high)
    {
        if (low >= high)
        {
            return;
        }
        int mid = low + (high - low) / 2;
        sort(arr, low, mid);
        sort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }

    void printArray(int arr[], int size)
    {
        int i = 0;
        for (i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    int i = 0;
    int n;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mergeSort m;
    m.sort(arr, 0, n - 1);
    m.printArray(arr, n);
    return 0;
}