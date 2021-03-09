#include<iostream>
using namespace std;

void insertionSort(int arr[], int n) {
	
}

void selectionSort(int arr[], int n) {
	int min_index;
	for(int i = 0; i < n-1; i++) {
		min_index = i;
		for(int j = i+1; j < n; j++) {
			if(arr[j] < arr[min_index]) {
				min_index = j;
			}
		}
		        int temp = arr[i];
				arr[i] = arr[min_index];
				arr[min_index] = temp;;
	}
}

void bubbleSort(int arr[], int n) {
	bool swapped;
	for(int i = 0; i < n-1; i++) {
		swapped = false;
		for(int j = 0; j < n-i-1; j++) {
			if(arr[j] > arr[j+1]) {
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				swapped = true;
			}
			
		}
		if(swapped == false) {
				break;
			}
	}
}

void printArray(int arr[], int n) {
	for(int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};  
    int n = sizeof(arr)/sizeof(arr[0]);  

//	selectionSort(arr,n);  // 
//  bubbleSort(arr, n);  // best O(N) & worst O(N*N)
insertionSort
    cout<<"Sorted array: \n";  
    printArray(arr, n);
	 
    return 0;  
}
