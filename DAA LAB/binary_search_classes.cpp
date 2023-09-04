#include <iostream>
using namespace std;

class BS
{
public:
    int LS(int n, int key, int arr[])
    {
        int high = n;
        int low = 0;
        while (low <= high)
        {
            int mid = (high + low) / 2;
            if (mid == key)
            {
                return mid;
            }
            else if (mid < key)
            {
                low = mid + 1;
            }
            else
            {
                high = mid;
            }
        }
        return -1;
    }
};

int main()
{
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;
    int arr[n];
    int i = 0;
    BS binarySearch;
    cout << "Enter the elements of the array: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the key to be searched: ";
    cin >> key;
    int res = binarySearch.LS(n, key, arr);
    cout << "The position is :";
    cout << res;
    return 0;
}
