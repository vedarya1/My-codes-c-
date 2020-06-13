#include<iostream>
using namespace std;
#include<cstring>

void rowsum(int a[][100],int m,int n){
	int sum=0;
	int i,j;
	for(i=0;i<m;i++){
		for( j=0;j<n;j++){
			sum=sum+a[i][j];
		}
			//print the row sum
	cout<<"row"<<" "<<i<<" "<<sum<<endl;
	sum=0;
	}

}

void colsum(int a[][100],int m,int n){
	int sum=0;
	int i,j;
	for(j=0;j<n;j++){
		for( i=0;i<n;i++){
			sum=sum+a[i][j];
		}
			//print the row sum
	cout<<"col"<<" "<<j<<" "<<sum<<endl;
	sum=0;
	}

}
int main(){
	int arr[100][100];
	int m,n;
	cin>>m>>n;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	rowsum(arr,m,n);
	colsum(arr,m,n);
}
