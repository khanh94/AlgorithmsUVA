#include <stdio.h>

// A recursive binary search function. It returns location of x
// in given array arr[l...r] if present, otherwise -1

int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= 1)
	{
		int mid = l + (r - l)/2;

		//If the element is present at the middle itself
		if (arr[mid] == x) return mid;

		//If element is smaller than mid, then it is in the left subarray
		if (arr[mid] > x) return binarySearch(arr, l, mid - 1, x);

		//Else the element is in the right subarray
		return binarySearch(arr, mid + 1, r, x);
	}

	//When an element is not present, return -1
	return -1;
}

int main(void)
{
	int arr[] = {2, 3, 4, 10, 40};
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 10;
	int result = binarySearch(arr, 0, n-1, x);
	(result == -1) ? printf("Element is not in the array")
				   : printf("Element is present at index %d", result);

	return 0;	
}

