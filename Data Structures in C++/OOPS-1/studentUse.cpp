#include<iostream>
using namespace std;
#include "student.cpp"


int main(){
	
	student s1(10,1001);
	cout<<"Address of s1 :" << &s1 <<endl;
	s1.display();
	
	student s2(20);
	s2.display();
	
	
/*	
	student s1;
	
	s1.display();
	
	student s2;
	
	student *s3 = new student;
	s3->display();
	
	cout<<"Parameterized constructor Demo ! "<<endl;
	student s4(10);
	
	s4.display();
	
	student *s5 = new student(101);
	(*s5).display();
	
	student s6(10,20);
	s6.display();
	*/
	
	
/*	//Create objects statically
	student s1;
	student s2;
	student s3,s4,s5;
	
	//s1.age = 24;
	s1.rollNumber = 101;
	
	//cout<<s1.age<<endl;
	cout<<" S1 age"<<s1.getAge()<<endl;
	cout<<"S1 roll"<<s1.rollNumber<<endl;
	
	s1.display();
	s2.display();
	
	
	//s2.age = 30;
	
	//create objects dynamically
	student *s6 = new student;
	
	//(*s6).age = 23;
	(*s6).rollNumber = 104;
	(*s6).display();
	
	cout<<"S6 age"<<s6->getAge()<<endl;
	
	//s6-> age = 23;
	s6 -> rollNumber = 104;
	s6->display();*/
	
	
}
