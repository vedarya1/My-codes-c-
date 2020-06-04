#include<iostream>
using namespace std;

int main(){
	
/*	while(true){  //more memory usage and need manual deletion
		int *p= new int ;
	}
	
	while(true){
		int i=10;
	}*/
	int *p= new int ;
	delete p;// deallocate
	
	p=new int;//single element deletion
	delete p;
	
	p= new int[100];//array deletion
	delete [] p;
	
	
}
