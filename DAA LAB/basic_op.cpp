#include <iostream>

using namespace std;

class BasicOperationCounter
{
    int elements[100];
    int numElements;

public:
    void getData();
    void linearSearch();
    void binarySearch();
    void towerOfHanoi();
    void selectionSort();
    void bubbleSort();
    void display();
};

void BasicOperationCounter::display()
{
    cout << "The elements are: ";
    for (int i = 0; i < numElements; i++)
    {
        cout << endl
             << elements[i] << " ";
    }
}

void BasicOperationCounter::getData()
{
    cout << "Enter the number of elements: ";
    cin >> numElements;
    cout << "Enter the elements: ";
    for (int i = 0; i < numElements; i++)
    {
        cin >> elements[i];
    }
}

void BasicOperationCounter::linearSearch()
{
    int key, flag = 0, operationCount = 0, index;
    cout << "Enter the element to be searched: ";
    cin >> key;
    for (index = 0; index < numElements; index++)
    {
        operationCount++;
        if (elements[index] == key)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "Element found at position " << index + 1 << ".";
    }
    else
    {
        cout << "Element not found";
    }
    cout << "\nNumber of times the basic operating statement is executed: " << operationCount;
}

void BasicOperationCounter::binarySearch()
{
    int key, flag = 0, operationCount = 0, low = 0, high = numElements - 1, mid;
    cout << "Enter the element to be searched: ";
    cin >> key;
    while (low <= high)
    {
        operationCount++;
        mid = (low + high) / 2;
        if (elements[mid] == key)
        {
            flag = 1;
            break;
        }
        else if (elements[mid] < key)
        {
            low = mid + 1;
        }
        else if (elements[mid] > key)
        {
            high = mid - 1;
        }
    }
    if (flag == 1)
    {
        cout << "Element found at position " << mid + 1 << ".";
    }
    else
    {
        cout << "Element not found";
    }
    cout << "\nNumber of times the basic operating statement is executed: " << operationCount;
}

void BasicOperationCounter::towerOfHanoi()
{
    int numDisks;
    cout << "Enter the number of disks: ";
    cin >> numDisks;
    int operationCount = (1 << numDisks) - 1;
    cout << "Number of times the basic operating statement is executed: " << operationCount;
}

void BasicOperationCounter::selectionSort()
{
    int operationCount = 0;
    for (int i = 0; i < numElements - 1; i++)
    {
        for (int j = i + 1; j < numElements; j++)
        {
            operationCount++;
            if (elements[i] > elements[j])
            {
                int temp = elements[i];
                elements[i] = elements[j];
                elements[j] = temp;
            }
        }
    }
    cout << "Number of times the basic operating statement is executed: " << operationCount;
}

void BasicOperationCounter::bubbleSort()
{
    int operationCount = 0;
    for (int i = 0; i < numElements - 1; i++)
    {
        for (int j = 0; j < numElements - i - 1; j++)
        {
            operationCount++;
            if (elements[j] > elements[j + 1])
            {
                int temp = elements[j];
                elements[j] = elements[j + 1];
                elements[j + 1] = temp;
            }
        }
    }
    cout << "Number of times the basic operating statement is executed: " << operationCount;
}

int main()
{
    BasicOperationCounter obj;
    int choice;
    char continueChoice;
    obj.getData();
    do
    {
        cout << "\n1. Linear Search\n2. Binary Search\n3. Tower of Hanoi\n4. Selection Sort\n5. Bubble Sort\nEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            obj.linearSearch();
            break;
        case 2:
            obj.binarySearch();
            break;
        case 3:
            obj.towerOfHanoi();
            break;
        case 4:
            obj.selectionSort();
            obj.display();
            break;
        case 5:
            obj.bubbleSort();
            obj.display();
            break;
        default:
            cout << "Invalid choice";
        }
        cout << "\nDo you want to continue? (y/n): ";
        cin >> continueChoice;
    } while (continueChoice == 'y' || continueChoice == 'Y');
    return 0;
}
