#include<iostream>
using namespace std;
#include<cstring>
#include<cmath>

int stringToNumber(char input[]){
	//base case
	
	if(strlen(input)==1){
		
	  int b= input[0]-'0';
		return b;
	}
	int small= stringToNumber(input+1);
	int s = input[0]-'0';
	return s*pow(10,( strlen(input)-1)) + small;
}

int main(){
	char input[50];
	cin>>input;
	cout<<stringToNumber(input)<<endl;
}
