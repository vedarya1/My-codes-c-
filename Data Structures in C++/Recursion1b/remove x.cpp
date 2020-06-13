#include <iostream>

#include<cstring>
using namespace std;

 void removeX(char input[]){
 	//base case
 	if(strlen(input)==0){
 		return;
	 }
	
	  
	  removeX(input+1);
	  	if(input[0]=='x'){
	  for(int i=0;i<strlen(input);i++){
	  
	  		input[i]=input[i+1];
		  }
	  }
	 
	 }
	  
 	
 


int main() {
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}
