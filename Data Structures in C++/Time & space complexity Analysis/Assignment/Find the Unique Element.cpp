#include<iostream>
using namespace std;

int FindUnique(int input[],int size){
	int output;
	for(int i=0;i<size;i++)
	{
		output^=input[i];
	}
	return output;
}
int main(){
	int size;
	cin>>size;
	
	int *input = new int[1+size];
	
	for(int i = 0;i<size;i++)
		cin>>input[i];
		cout<<FindUnique(input,size)<<endl;	
	
}
