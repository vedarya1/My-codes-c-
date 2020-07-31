#include<iostream>
using namespace std;

// swapAlternate function
void swapAlternate(int arr[], int size) {
	// iterate until size - 1
	for(int i = 0; i < size-1; i = i+2) {
		int temp = arr[i];
		arr[i] = arr[i+1];
		arr[i+1] = temp;
	}
}


// main function
int main() {
	// no of test cases
	int t;
	cin >> t;
		// loop until no of test cases = 0
	while(t--) {
		// size of array
		int n;
		cin >> n;
		// dynamic allocation of array
		int *arr = new int[n];
		// taking array input
		for( int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		// calling AtlternateSwap function
		swapAlternate(arr, n);
		// print modified array
		for(int i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
		// deallocate array
		delete[] arr;
	}
	
}
