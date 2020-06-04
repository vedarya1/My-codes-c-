#include<iostream>
using namespace std;

int sum(int input[],int n){
	//base case
	if(n==0){
		return 0;
	}
	
	int small = sum(input+1,n-1);
	return input[0]+small;
}




int main(){
  int n;
  cin>>n;
  
  int *input = new int[n];
  
  for(int i=0;i<n;i++){
  	cin>>input[i];
  }
  
  int output = sum(input,n);
  
  cout<< output << endl;
}
