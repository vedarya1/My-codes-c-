#include<iostream>
using namespace std;
#include<cstring>
//sum of row
void arrayprint(int a[][100],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main(){

	int arr[100][100];
	int m,n;
	cin>>m>>n;
	//taking input
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	arrayprint(arr,m,n);
	
	// print array row wise
	cout << "Row wise : " << endl;
	for(int i = 0; i < m; i++) {
		for(int j = 0;  j < n; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;	
	}

	cout << "Column wise : " << endl;
	for(int j = 0; j < n; j++) {
		for(int i = 0; i < m; i++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	
}

