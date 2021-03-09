#include<iostream>
using namespace std;
 void swap(int *x, int *y) {
 	int temp = *x;
 	*x = *y;
 	*y = temp;
 }
 
 void selectionsort(int arr[], int n) {
 	int i, j, min;
 	for(int i = 0; i < n-1; i++) {
 		min = i;
 		for(int j = i+1; j < n; j++) {
 			if(arr[j] < arr[min]) {
 				min = j;
			 }
		 }
		 swap(&arr[min], &arr[i]);
	 }
 }

int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i<n; i++) {
		cin >> arr[i];
	}
	selectionsort(arr,n);
	for(int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}
