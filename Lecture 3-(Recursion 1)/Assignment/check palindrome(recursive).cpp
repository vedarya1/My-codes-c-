#include<iostream>
#include <cstring>

using namespace std;

bool checkPalindrome(char input[]){
	//base case
	if(strlen(input)<=1){
		return true;
	}
	
	//small calcualtion
	if(input[0]!=input[strlen(input)-1]){
		return false;
	}
	else{
		input[strlen(input)-1]='\0';
		return checkPalindrome(input+1);
	}
	
	
	/*//2nd method
bool checkPalindromeHelper(char input[], int start, int end)
{
    //Base case 
    if(start>=end)
        return true;
    
    if(input[start]!=input[end])
        return false;
    
    return checkPalindromeHelper(input, start+1, end-1);
}


bool checkPalindrome(char input[]) {
   //helper(input,0,len-1);
    if(strlen(input)<=1)
        return true;
    
    int start = 0, end = strlen(input)-1;

    checkPalindromeHelper(input,start,end);
}
*/


}

int main(){
   char input[50];
   cin>>input;
   if(checkPalindrome(input)){
   	cout<<"true"<<endl;
   }	
   else {
   	cout<<"false"<<endl;
   }
}
