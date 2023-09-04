#include <iostream>
#include <vector>
using namespace std;

class bubble
{
public:
    void bs(vector<int> &arr)
    {
        int i = 0;
        int j = 0;
        for (i = 0; i < arr.size(); i++)
        {
            int min = i; // Initialize min with i
            for (j = i; j < arr.size(); j++)
            {
                if (arr[min] > arr[j])
                {
                    min = j;
                }
            }
            swap(arr[i], arr[min]);
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
