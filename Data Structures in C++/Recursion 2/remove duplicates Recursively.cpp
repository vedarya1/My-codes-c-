#include<iostream>
using namespace std;

 void removeConsecutiveDuplicates(char *input){
 	//base case
 	if(input[0]=='\0'){
 		return ;
	 }
	 if(input[0]==input[1]){
	 	input[0]=input[1];
	 }
	  removeConsecutiveDuplicates(input+1);
	  if(input[0]==input[1]){
	  	for(int i=0;input[i]!='\0';i++){
	  		input[i]=input[i+1];
		  }
	  }
 }

int main(){
  char input[1000];
  cin>>input;
  removeConsecutiveDuplicates(input);
  cout<<input<<endl;	
}
