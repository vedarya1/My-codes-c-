#include<iostream>
using namespace std;
#include "student.cpp"

int main(){

    student s1(10,1001);
    student s2(20,2001);

    student *s3 = new student(30,3001);

    s2=s1;//copy assignment operator =
    *s3 = s1;
    s2=*s3;
    
    delete s3;
    

     




/*	//ststically
	student s1(10,1001);
	cout<<" s1 : ";
	s1.display();
	
	student s2(s1);
	cout<<" s2 :";
	s2.display();
	
	//dynamically
	student *s3 = new student(20,2001);
    cout<<" s3 : ";
	s3->display();
	
	student	s4(*s3);
	
	student *s5 = new student(*s3);
	student *s6 = new student(s1);
	*/
	
}
