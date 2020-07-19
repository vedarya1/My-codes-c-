/*

'Linear search' is a method for finding an element within an array/list.
 It sequentially checks each element of the array/list until a match is found or the whole array/list has been searched.

*/


int linearSearch(int arr[], int n, int val){
	for(int i = 0; i < n; i++){
		if(arr[i] == val){
			return i;
		}
	}
	return -1;
}



#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	
	while(t--){
		int n;
		cin >> n;
		int *arr = new int[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}
		
		int val;
		cin >> val;
		cout << linearSearch(arr, n, val) << endl;
	}
	return 0;
 }
