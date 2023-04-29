

#include <stdio.h>

void insertionSort(int arr[], int n)
{

	if(n == 1)
		return;
	
	insertionSort(arr, n-1);

	int j, last;
	last = arr[n-1];
	j = n - 2;

	while(j >= 0 && arr[j] > last){
		arr[j+1] = arr[j];
		j = j - 1;
	}
	arr[j + 1] = last;
}
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    insertionSort(arr, n);
    printArray(arr, n);
 
    return 0;
}