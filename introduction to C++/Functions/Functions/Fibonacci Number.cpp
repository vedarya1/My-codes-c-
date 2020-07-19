#include<iostream>
using namespace std;

bool checkMember(int n){
	int a=0;//first num f0
	int b=1;//second num f1
	if(n==a || n==b)return true;
	int c=a+b;
	while(c<=n){
		if(c==n)return true;
		a=b;
		b=c;
		c=a+b;
	}
	return false;
}

int main(){
	int n;
	cin>>n;
	if(checkMember(n)){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
}

