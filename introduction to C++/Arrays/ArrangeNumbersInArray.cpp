#include<iostream>
using namespace std;
// arrange function void type
void arrange(int arr[], int n) {
	// declaration of variables value, start point and end point
	int val = 1, start, end;
	
	// iteration from bith sides with increase in value
	for(start = 0, end = n-1; start <= end; start++,end--) {
		arr[start] = val;
		
		// for odd value of n print from left side and stop
		if(start == end) {
			break;
		}
		val++;
		arr[end] = val;
		val++;
	}
}


// main function

int main() {
	// no of test cases
	int t;
	cin >> t;
	
	// loop until no of test cases = 0
	while(t--) {
		// user input a integer
	   int n;
	   cin >> n;	
	   //dynamic array creation
	   int *arr = new int[n];
	   // call arrange function
	   arrange(arr, n);
	   // no of print array elements using arrange function
	   for( int i = 0; i < n; i++) 
	   {
	   	cout << arr[i] << " ";
	   }
	   // new line for each test case
	   cout << endl;
	   // deallocation of array
	   delete[] arr;
	}
}
