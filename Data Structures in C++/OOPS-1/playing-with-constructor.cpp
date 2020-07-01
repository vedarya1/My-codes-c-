#include<iostream>
using namespace std;
#include "student.cpp"

int main(){
	
	student s1; //constructor 1 called
	
	student s2(101);  //constructor 2 called
	
	student s3(20,2001); //constructor 3 called
	
	student s4(s3); //copy constructor
	
	//just copying s2 in s1
	s1=s2;  //copy assignment opertaor
	
	student s5 = s4; //student s5(s4);  copy constructor called.
	
	
    
	                 
	 
}
