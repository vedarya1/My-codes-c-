#include<iostream>
using namespace std;

bool sorted(int a[],int size){
	if(size==0 || size==1){
		return true;
	}
	
	if(a[0]>a[1]){
		return false;
	}
	
	bool isSorted = sorted(a+1,size-1);
	return isSorted;
	//or
	/*if(isSorted){
	return true;}
	else {return false;}
	*/
}

int main(){
	int n,a[100];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	bool ans = sorted(a,n);
	cout<<ans; 
}
