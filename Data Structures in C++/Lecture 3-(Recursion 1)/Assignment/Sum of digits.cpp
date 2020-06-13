#include<iostream>
using namespace std;

int sumOfDigits(int n){
	//base case
	if(n<=9){
		return n;
	}
	
	int ld = n%10;
	return ld + sumOfDigits(n/10);
}

int main(){
	int n;
	cin>>n;
	
	cout<<sumOfDigits(n)<<endl;
}
