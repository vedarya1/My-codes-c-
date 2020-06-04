#include<iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double geometricSum(int k){
   //base case
   if(k==0){
   	return 1;
   }	
   //recursive call
   double small = geometricSum(k-1);
   //small calculation
   return 1/pow(2,k) + small;
}

int main(){
   int k;
   cin>>k;	
   cout<<fixed<<setprecision(5);
   cout<<geometricSum(k)<<endl;
}
