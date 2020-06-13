#include<iostream>
using namespace std;

int power(int x,int n){
	//base case
	if(n==0){
		return 1;
	}
	//recursive call
	int ans=power(x,n-1);
	return x*ans;
}

int main(){
  int x,n;
  cin>>x>>n;
  int output = power(x,n);
  cout<<output<<endl;	
}
