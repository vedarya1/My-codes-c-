#include<iostream>
using namespace std;
    
    int ans1(int input[],int low,int high,int x){
    	
	
		
		if(high>=low){
    		int mid = low + (high-low)/2;
    		if(input[mid]==x){
    			return mid;
			}
			if(input[mid]>x){
				return ans1(input,low,mid-1,x);
			}
			return ans1(input,mid+1,high,x);
		}
		return -1;
	}
    
    int binarySearch(int input[],int size,int element){
       int low=0;
       int high  = size-1;
       	return ans1(input,low,high,element);
	} 
     
int main(){
	int input[100000],length,element,ans;
	cin>>length;
	for(int i = 0;i<length ; i++){
		cin>>input[i];
	}
	
	cin>>element;
	int output = binarySearch(input,length,element);
	cout<<output<<endl;
}
