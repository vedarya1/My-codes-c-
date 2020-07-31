#include<iostream>
using namespace std;


int findUnique(int *input,  int size) {
	// global variables
	int i, j, result = 0;
	/*--- XOR METHOD---*/
	for(i = 0; i < size; i++) {
		result = result^input[i];
	}
	return result;
	// 2nd approach
	/* for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            if(i!=j && arr[i]==arr[j]){
                break;
            }
        }
       if(j==size)
            return arr[i];
    }*/
}

int main() {
	
	// test case
	int t;
	cin >> t;
	
	while(t--) {
		// size of array
		int n;
		cin >> n;
		
		int *arr = new int[1000];
		for( int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		cout << findUnique(arr, n) << endl;
	}
	return 0;
}
