#include<iostream>
using namespace std;
#include<cstring>
bool checkAB(char input[]){
	//base case
	if(strlen(input)==0){
		return true;
	}
	checkAB(input+1);
/*	if(input[0]=='a'){
		if(input[1]=='a'){
			return true;
		}
		else if(input[1]=='b' && input[2]=='b'){
			if(input[3]=='a'){
				return true;
			}
		}
		
	}
	return false;*/
	if(( input[0]=='a' && input[1]=='a') ){
	return true;
	
	}
	else if (input[0]=='a' && input[1]=='b' && input[2]=='b' && input[3]=='a')
	{
		return true;
	}
	
	
	else return false;
}


int main(){
	char input[100];
	bool ans;
	cin>>input;
	ans  =checkAB(input);
	if(ans){
		cout<<"true"<<endl;
	}
	else cout<<"false"<<endl;
}
