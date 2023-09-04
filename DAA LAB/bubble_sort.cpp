#include <iostream>
#include <vector>
using namespace std;

class bubble
{
public:
    void bs(vector<int> &arr)
    {
        int i = 0;
        for (i = 0; i < arr.size() - 1; i++)
        {
            for (int j = 0; j < arr.size() - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
    }
};

int main()
{
    vector<int> arr;
    int size = 0;
    cin >> size;
    int i = 0;
    int val;
    for (i = 0; i < size; i++)
    {
        cin >> val;
        arr.push_back(val);
    }
    bubble b;
    b.bs(arr);
    for (i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}