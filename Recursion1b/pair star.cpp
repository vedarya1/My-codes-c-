#include<iostream>
using namespace std;
#include<cstring>

void pairStar(char input[]){
	//base case
	if(strlen(input)<=1){
		return ;
	}
	
	pairStar(input+1);
	if(input[0]==input[1]){
		for(int i=strlen(input);i>=0;i--){
			input[i+1]=input[i];
			
		}
		
	  input[1]='*';
	}
	
	

}

int main(){
  char input[100];
  cin.getline(input,100);
  pairStar(input);
  cout<<input<<endl;	
}
