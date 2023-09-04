#include <iostream>
using namespace std;

class BS
{
public:
    int LS(int n, int key, int arr[])
    {
        int i;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == key)
            {
                flag = i;
                break;
            }
        }
        return flag + 1;
    }
};

int main()
{
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;
    int arr[n];
    int i = 0;
    BS bs;
    cout << "Enter the elements of the array: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the key to be searched: ";
    cin >> key;
    int res = bs.LS(n, key, arr);
    cout << "The position is :";
    cout << res;
    return 0;
}
