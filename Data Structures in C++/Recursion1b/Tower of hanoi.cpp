#include<iostream>
using namespace std;

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    
   
   //base case
    if(n==0){
        
        return;
    }
    //source to auxiliary
    towerOfHanoi(n-1,source,destination,auxiliary);
    //source to destination for 1 remaining
    cout<<source<<" "<<destination<<endl;
    
    //auxiliary to destination 
    towerOfHanoi(n-1,auxiliary,source,destination);
     
}



int main(){
	int n;
	cin>>n;
	towerOfHanoi(n,'a','b','c');
	
}
