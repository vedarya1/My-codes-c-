#include<iostream>
using namespace std;

int factorial(int n){
	//base condition
	if(n==0){
		return 1;
	}
	
	//recursive call
	int small = factorial(n-1);
	 
	 //small calculation
	return n*small;
}

int main(){
  int n;
  cin>>n;
  int output=factorial(n);
  cout<<output;	
}
