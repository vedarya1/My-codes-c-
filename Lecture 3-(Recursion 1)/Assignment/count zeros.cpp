#include<iostream>
using namespace std;

int countZeros(int n){
	//base case
	if(n<=9){
		if(n==0){ 
		    return 1;
		}
		else return 0;
	}
	
	int count = 0;
	int ld = n%10;
	int smallAns = countZeros(n/10);
	if(ld==0){
		count=1;
	}
	return count + smallAns;
}

int main(){
	int n;
	cin>>n;
	int output = countZeros(n);
	cout<<output;
}
