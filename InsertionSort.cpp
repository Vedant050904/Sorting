#include <iostream>
using namespace std;

void printAay(int* A, int n);
void insertionSort(int* A, int n);

int main()
{
    int n = 6;
    int A[n] = {12, 11, 13, 5, 6, 2};

    cout << "Before Sorting....\n";
    printAay(A, n);
    insertionSort(A, n);
    cout << "After Sorting....\n";
    printAay(A, n);

    return 0;
}

void printAay(int* A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

void insertionSort(int* A, int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) 
    {
        key = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}