#include <iostream> 
using namespace std; 


int binarySearch(int arr[], int l, int r, int x) 
{ 
	if (r >= l) { 
		int mid = l + (r - l) / 2; 

		
		if (arr[mid] == x) 
			return mid; 

		
		if (arr[mid] > x) 
			return binarySearch(arr, l, mid - 1, x); 

		
		return binarySearch(arr, mid + 1, r, x); 
	} 

	
	return -1; 
} 

int main(void) 
{ 
	int arr[] = { 2, 3, 6, 10, 40, 33, 9, 7, 4, 82 }; 
	int x = 10; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	int result = binarySearch(arr, 0, n - 1, x); 
	(result == -1) ? cout << "Element is not present in array"
				: cout << "Element is present at index " << result; 
	return 0; 
} 
// For Dynamic Input Uncoment Below Function
/*
int main()
{
    int x,arr[x],n;
    cin>>x;
    for (int i=0;i<x;i++)
        cin>>arr[i];
    n = sizeof(arr) / sizeof(arr[0]); 
	int result = binarySearch(arr, 0, n - 1, x); 
	(result == -1) ? cout << "Element is not present in array"
				: cout << "Element is present at index " << result; 
	return 0; 
}
*/
