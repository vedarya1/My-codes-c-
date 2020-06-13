#include<iostream>
using namespace std;

int firstIndex(int input[],int n, int x){
	//base case
	if(n<=0){
		return -1;
	}
	 // small calculation
	if(input[0]==x){
		return 0;
	}
	
	int small = firstIndex(input+1,n-1,x);
	
	if(small == -1){
		return small;
	}
	else return small+1;
}

int main(){
	int n;
	cin>>n;
	
	int *input = new int[n];
	for(int i=0;i<n;i++){
		cin>>input[i];
	}
	
	int x;
	cin>>x;
	int ans = firstIndex(input,n,x);
	cout<<ans<<endl;
	
	delete []input;
}
