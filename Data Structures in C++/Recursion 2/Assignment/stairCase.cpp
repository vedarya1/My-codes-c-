#include<iostream>
using namespace std;
    
   int ways(int n,int m){
   	  //base case
	   if(n<=1){
   		return n;
	   }
	   int res=0;
	   for(int i=1;i<=m && i<=n;i++){
	   	res += ways(n-i,m); 
	   }
	   return res;
   } 
    
   int staircase(int n,int m=3){
   	return ways(n+1,m);
   } 
    
int main(){
	int n;
	cin>>n;
	int output = staircase(n);
	cout<<output<<endl;
}
