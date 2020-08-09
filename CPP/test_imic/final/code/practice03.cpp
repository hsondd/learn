#include <iostream>
#include <string>

using namespace std;

void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  
void selectionSort(int arr[], int n)  
{  
    int i, j, min_idx;  
 
    for (i = 0; i < n-1; i++)  
    {    
        min_idx = i;  
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[min_idx])  
            min_idx = j;  
 
        swap(&arr[min_idx], &arr[i]);  
    }  
}  

int main03()
{
	int nums[] = {4, 5, 9, 12, 9, 22, 45, 7};
	int n = sizeof(nums)/sizeof(*nums);
	
	cout << "Original array: ";
	for (int i = 0; i < n; i++)
		cout << nums[i] << " ";
	
	selectionSort(nums, n);
	
	cout << "\nThree largest elements: ";
	for (int i = n-1; i >= n-3; i--)
		cout << nums[i] << " ";
  	
    return 0; 
}


