#include<iostream>
using namespacce std;

int main(){
	char name[100];
	cout << "Enter your name";  // abc
	cin >> name;
	name[4] = 'x';    // abc
	name[3] = 'd';  // abdx
	name[1] = '\0'; // a
	cout << "Name : " << name <<  endl;
 }
