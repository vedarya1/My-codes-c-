#include<iostream>
using namespace std;

class Vehicle {
	public :
		string color;
		
	void print() {
		cout << "Vehicle" << endl;
	}	
};

class Car : public Vehicle {
	public :
		int numGears;
	
	void print() {  // fn overriding
		cout << "Car" << endl;
	}	
};

int main() {
	Vehicle v;
	
	Car c;
	
	v.print(); // NP
	
	c.print(); 
	
	Vehicle *v1 = new Vehicle;
	
	Vehicle *v2;
	v2 = &v; // also allowed
	
	v2 = &c; // also allowed nut base to child not allowed
	
	v1->print(); // call vehicle
	
	v2->print(); // call vehicle
}
