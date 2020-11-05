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
	    
//	Vehicle() {
//		cout << "Vehicle's default constructor " << endl;
//	}	    
	    
	void print() {
		cout << "Vehicle" << endl;
	}    
		
	Vehicle(int z) {
		cout << "Vehicle's Parameterized constructor " << z << endl;
		maxSpeed = z;
	}		 	
	
	~Vehicle() {
		cout << "Vehicle's Destructor " << endl;
	}
};

 class Car: virtual public Vehicle {
 	public:
 		int numGears; 
 		
 	Car() : Vehicle(3){
 		cout << "Car's default constructor " << endl;
	 }	
	 
	~Car() {
		cout << "Car's Destructor " << endl;
	} 
 		
// 	void print() {
//	 cout << "NUmTyres : " << numTyres << endl;
//	 cout << "Color : " << color << endl;
//	 cout << "NUm gears : " << numGears << endl;
////	 cout << "Max Speed : " << maxSpeed << endl; // not accessible
//	 }	
 };
 
 class Truck: virtual public Vehicle {
 	public:
 		
 	Truck() : Vehicle(4){
 		cout << "Truck's default constructor " << endl;
	 }	

 };
 
 class Bus: public Car, public Truck {
 	public:
 	
 	Bus() : Vehicle(5) {
 		cout << "Bus's constructor" << endl;
	 }
	 
//	void print() {
//		cout << " Bus" << endl;
//	} 
 };
 
 int main() {
 	Bus b;
 	
 	b.Car :: print();
 	
 }
