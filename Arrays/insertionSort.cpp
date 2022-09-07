/*
Approach
In insertion sort, the basic idea is to divide the array into a sorted and an unsorted part. Elements from the unsorted part are picked one by one and placed at their correct position in the sorted part until the whole array is sorted.

Iterate the array from i = 1 to i < n. Compare the i-th element to its previous elements one by one until it is less than its previous elements and keep moving the greater elements forward.
Once the correct position for the i-th element is found (i.e. i-th element is greater than its previous element), place it at that position.
*/


void insertionSort(vector<int> &arr) {
	int n=arr.size();
	 int i, key, j; 
    for (i = 1; i < n; i++)
    { 
        key = arr[i]; 
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 
}
