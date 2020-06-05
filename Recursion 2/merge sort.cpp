#include<iostream>
using namespace std;
 //merge two subarrays of input[]
 void merge(int input[],int si,int ei){
   int n= ei-si+1;
   int mid = (si+ei)/2;
   int n1 = mid-si+1 ; //size of first subarray
   int n2 = ei-mid;//size of second subarray
   int P1[n1],P2[n2];//first & second subarrays
   int i,j,k;//starting indexes of subarrays and dummy input[] array
   for(i=0;i<n1;i++)
   P1[i]=input[si+i];//first temp subarray
   for(j=0;j<n2;j++)
   P2[j]=input[mid+1+j];//second temp subarray
  /*merge the temp arrays back into input[]*/
   
  i=0;//initial index of P1
  j=0;//initial index of P2
  k=si;//initial index of dummy array
  while(i<n1&&j<n2){
  	if(P1[i]<=P2[j]){
  		input[k]=P1[i];
  		i++;
	  }
	  else{
	  	input[k]=P2[j];
	  	j++;
	  }
	  k++;
  }
  //copy remaining elements of P1 into input
  while(i<n1){
  	input[k]=P1[i];
  	i++;
  	k++;
  }
  //copy remaining elements of P2 into input
  while(j<n2){
  	input[k]=P2[j];
  	j++;
  	k++;
  }
 }
 void mergeSortHelper(int input[],int si,int ei){
     //now this is working as main function
     //base case
	 if(si>=ei){
     	return ;
	 }
	 int mid = (si+ei)/2;
	 //first half sorted
	 mergeSortHelper(input,si,mid);
	 //second half sorted
	 mergeSortHelper(input,mid+1,ei);
	 //calling merger function
	 merge(input,si,ei);	
}

void mergeSort(int input[], int size){
	int si = 0;
	int ei = size-1;
     
     //using helper function to get arguments si and ei
    mergeSortHelper(input,si,ei);
    
}



int main(){
    int length;
	cin>>length;
	int *input = new int [length];
	for(int i=0;i<length;i++)
		{
		 cin>>input[i];
		 }
        mergeSort(input,length);
		for(int i=0;i<length;i++){
			cout<<input[i]<<" ";
		}
		
	
}
