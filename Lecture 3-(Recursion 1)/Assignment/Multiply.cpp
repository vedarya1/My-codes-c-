#include<iostream>
using namespace std;

int multiplyNumbers(int x,int y){
	//base case
	if(y==0){
		return 0;
	}
	
/*	if(x<y){
		return multiplyNumbers(y,x);
	}
	else if(y!=0)
	return (x+multiplyNumbers(x,y-1));*/
	int ans = multiplyNumbers(x,y-1);
	return ans+x;
	
}

int main(){
	int m,n;
	cin>>m>>n;
	cout<<multiplyNumbers(m,n)<<endl;
}
