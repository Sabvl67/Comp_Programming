#include <iostream>

using namespace std;

int main()
{
    int n = 5;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);
                for (int k = 0; k < n; k++)
                {
                    cout << array[k] << " ";
                }
                cout << endl;
            }
        }
    }
}