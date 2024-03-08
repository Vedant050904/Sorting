// C++ code to implement quicksort

#include <iostream>
using namespace std;

void printArray(int* A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

// This function takes last element as pivot,
// places the pivot element at its correct position
// in sorted array, and places all smaller to left
// of pivot and all greater elements to right of pivot
int partition(int arr[], int low, int high)
{
	// Choosing the pivot
	int pivot = arr[high];

	// Index of smaller element and indicates
	// the right position of pivot found so far
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++) {

		// If current element is smaller than the pivot
		if (arr[j] < pivot) {

			// Increment index of smaller element
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[high]);
	return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
	if (low < high) 
    {
		int pi = partition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

int main()
{
    int n = 6;
	int arr[n] = { 10, 7, 8, 9, 1, 5 };
	// int N = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Sorting...." << endl;
	void printArray(int* arr, int n);
	// Function call
	quickSort(arr, 0, n - 1);
	cout << "After Sorting...." << endl;
	void printArray(int* arr, int n);
	return 0;
}