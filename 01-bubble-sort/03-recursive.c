
#include "stdbool.h"
#include <stdio.h>


void bubbleSort(int	arr[], int n) {

	int i;
	bool	swapped  = false;
	// or bool sorted = true

	for(i = 0; i < n - 1; i++) {
		if(arr[i] > arr[i+1]) {
		int t = arr[i];
		arr[i]  = arr[i+1];
		arr[i+1] = t;
		swapped = true;
		// or sorted = false
		}
	}
	if(swapped) {
		bubbleSort(arr,n);
	}
}


int main()
{
 
    int ar[] = { 5, 4, 8, 2, 9, 7, 3 };
    int n = sizeof(ar) / sizeof(int);
    bubbleSort(ar, n);
 
    printf("Sorted array : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", ar[i]);
    }
    printf("\n");
 
    return 0;
}