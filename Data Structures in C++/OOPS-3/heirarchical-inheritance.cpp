#include<iostream>
using namespace std;

// parent class
class Vehicle {
	private:
		int maxSpeed;
		
	protected:
	     int numTyres;
		 
	public:
	    string color;
		
	Vehicle() {
		cout << "Vehicle's default constructor " << endl;
	}		 	
	
	~Vehicle() {
		cout << "Vehicle's Destructor " << endl;
	}
};

class Car: public Vehicle {
 	public:
 		int numGears; 
 		
 	Car() {
 		cout << "Car's default constructor " << endl;
	 }	
	 
	~Car() {
		cout << "Car's Destructor " << endl;
	} 
 		
 	void print() {
	 cout << "NUmTyres : " << numTyres << endl;
	 cout << "Color : " << color << endl;
	 cout << "NUm gears : " << numGears << endl;
//	 cout << "Max Speed : " << maxSpeed << endl; // not accessible
	 }	
 };
 
 class Truck: public Vehicle {
 	public:
 		int numGears; 
 		
 	Truck() {
 		cout << "Truck's default constructor " << endl;
	 }	
	 
	~Truck() {
		cout << "Truck's Destructor " << endl;
	} 
 		
 	void print() {
	 cout << "NUmTyres : " << numTyres << endl;
	 cout << "Color : " << color << endl;
	 cout << "NUm gears : " << numGears << endl;
//	 cout << "Max Speed : " << maxSpeed << endl; // not accessible
	 }	
 };
