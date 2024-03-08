// This code will skip Passes if the array is already Sorted

#include <iostream>
using namespace std;

void printArray(int* A, int n);
void bubbleSort(int* A, int n);

int main()
{
    int n = 6;
    int A[n] = { 7, 2, 9, 4, 11, 17};

    cout << "Before Sorting...." << endl;
    printArray(A, n);
    bubbleSort(A, n);
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

void bubbleSort(int* A, int n)
{
    int temp;
    int isSorted = 0; // To increase the adaptiveness of code.
    for (int i = 0; i < n - 1; i++)
    {
        cout << "Working on Pass number " << i + 1 << endl;
        isSorted = 1;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                isSorted = 0;
            }
        }
        if(isSorted)
        {
            return;
        }
    }
}
