#include <stdio.h>
#include <stdbool.h>

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
	int i,j;
	bool swapped;

	for(i = 0; i < n - 1;i ++) {
		// #1
		swapped = false;

		for(j = 0; j < n - 1 - i; j++) {
			if(arr[j] > arr[j+1])
			{
				swap(&arr[j], &arr[j+1]);
				// #2
				swapped = true;
			}
		}

		// #3
		if(swapped == false) 
			break;
	}
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver program to test above functions
int main()
{
    int arr[] = { 5, 1, 4, 2, 8 };
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
	printf("Array size is: %d\n",n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}