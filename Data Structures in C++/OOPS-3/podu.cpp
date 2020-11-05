#include<bits/stdc++.h>
using namespace std;

int main() {
int n, input;
cin >> n;
int weight[n];
int counter = 1;
cin >> weight[0];
	
	while(cin >> input) {
	   if(counter > n-1) {
	   	cout << "Wrong Input";
	   	return 0;
	   }
	   
	   if(input == weight[counter - 1]) {
	   	weight[counter] = input+1;
	   }
	   else {
	   	weight[counter] = input;
	   }
	   counter++;
	}
	int total = 0;
	for(int i = 0; i < n; i++) {
		total += weight[i];
	}
	cout << total;
	return 0;
	
}
