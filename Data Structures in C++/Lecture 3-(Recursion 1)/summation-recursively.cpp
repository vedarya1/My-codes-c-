#include<iostream>
using namespace std;

int sum(int n){
	if(n==0){
		return 0;
	}
	
	int small=sum(n-1);
	
	return n+small;
}

int main(){
   int k;
   cin>>k;
   int output = sum(k);
   cout<<output<<endl;	
}
