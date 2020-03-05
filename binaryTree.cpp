#include <iostream>
using namespace std;
#define MAX 5

int searching(int arr[], int targetKey)
{
    int min = 0, max = MAX - 1, mid;
    while (max >= min)
    {
        mid = (max + min) / 2;
        if (arr[mid] == targetKey)
        {
            return mid;
        }
        else if (arr[mid] < targetKey)
        {
            min = mid + 1;
        }
        else
        {
            max = mid - 1;
        }
    }

    if (max < min)
    {
        return -1;
    }
}

void sorting(int arr[])
{
    int temp;
    for (int x = 0; x < MAX; x++)
    {
        for (int y = x + 1; y < MAX; y++)
        {
            if (arr[x] > arr[y])
            {
                temp = arr[x];
                arr[x] = arr[y];
                arr[y] = temp;
            }
        }
    }
}

int main()
{
    int targetKey;
    cout << "Enter the number to search" << endl;
    cin >> targetKey;

    int array[MAX] = {5, 55, 30, 7, 20};

    sorting(array);

    // for (int x = 0; x < MAX; x++)
    // {
    //     cout << array[x] << endl;
    // }

    int index = searching(array, targetKey);
    if (index == -1)
    {
        cout << "Target not found!";
    }
    else
    {
        cout << "The number you are looking for is in: " << index;
    }
    return 0;
}