#include <iostream>
using namespace std;

void printArray(int* A, int n);
void selectionSort(int* A, int n);

int main()
{
    int n = 6;
    int A[n] = { 7, 2, 9, 4, 11, 17};

    cout << "Before Sorting...." << endl;
    printArray(A, n);
    selectionSort(A, n);
    cout << "After Sorting...." << endl;
    printArray(A, n);

    return 0;
}

void printArray(int* A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

void selectionSort(int* A, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[min])
            {
                min = j;
            }

            int temp = A[i];
            A[i] = A[min];
            A[min] = temp;
        }
    }
}
