#include<iostream>
using namespace std;

int partition(int input[],int s,int e)
{
    int count=0;
    int PI=input[s];
    for(int i=s+1;i<=e;i++)
    {
        if(input[i]<=PI)
            count++;
    }
    
    int temp=input[s];
    input[s]=input[s+count];
    input[s+count]=temp;
    int i=s,j=e;
    while(i<=s+count && j>s+count)
    { 
    if(input[i]<=PI)
        i++;
    else if (input[j]>PI)
        j--;
    else
    {
		int temp=input[i];
        input[i]=input[j];
        input[j]=temp;
    }
    }
    return s+count;
}



void helper(int input[],int s,int e)
{
    if(s>=e)
        return;
    int c= partition(input,s,e);
    helper(input,s,c-1);
    helper(input,c+1,e);
}

void quickSort(int input[], int size) {
 
    if(size==0 || size==1)
        return;
    helper(input,0,size-1);

}
int main(){
	int n;
	cin>>n;
	
	int *input = new int[n];
	
	for(int i=0;i<n;i++){
		cin>>input[i];
	}
	
	quickSort(input,n);
	for(int i=0;i<n;i++){
		cout<<input[i]<<" ";
	}
	
	delete []input;
}
