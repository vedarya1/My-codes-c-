#include<iostream>
using namespace std;


int main(){
	//constant integer
	const int i=10;// or int const i= 10
	//i=12;
	
	//constant reference from a non const int
	int j=12;
	const int &k =j;
//	k++; // cannt change ,making only path constant
	j++;
	cout<<j<<endl;  // 13
	cout<<k<<endl; // 13
	cout<<i<<endl; //10
	
	//constant reference from a const int
	int const j2 = 12;
	int const &k2 = j2;
	j2++; //no change
	k2++; //no change
	
	// non  constant reference from a const int
	int const j3 = 12;
	int &k3 =j3;  //nahi kr skte
	k3++;  //nahi kr skte
}
