#include<iostream>
using namespace std;

int lastIndex(int input[],int n,int x){
	if(n<=0){
		return -1;
	}
	
	int small = lastIndex(input+1,n-1,x);
	
	if(small==-1){
		if(input[0]==x){
			return 0;
		}
		else return small;
	}
	else return small+1;
}


int main(){
	int n;
	cin>>n;
	int *input= new int[n];
	
	for(int i=0;i<n;i++){
		cin>>input[i];
	}
	int x;
	cin>>x;
	int ans = lastIndex(input,n,x);
	
	cout<<ans<<endl;
	delete []input;
}
