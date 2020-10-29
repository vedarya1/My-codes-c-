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

 // child class
 
 // public access modifier
 /* public -> color, numGears
    private -> nothing
    protected -> numTyres */
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

//// protected access modifier
///* public -> numGears
//  protected -> color, numTyres
//  private : nothing
// */
// class Car : protected Vehicle {
// 	public: 
// 	int numGears;
// 	
// 		void print() {
//	 cout << "NUmTyres : " << numTyres << endl; // protected
//	 cout << "Color : " << color << endl;    // prtected
//	 
//	 cout << "NUm gears : " << numGears << endl;  // public
////	 cout << "Max Speed : " << maxSpeed << endl; // not accessible
// 	
// };
 
// 
// // private access modifier
// // priavte -> numTyres , color
// class Car : private Vehicle {
// 	
// };


int main() {
	Vehicle v;
	
	v.color = "Blue";
//	v.maxSpeed = 100; // not accessible
//	v.numTyres = 4;    // not accessible

    Car c;
    c.color = "Black";
//    c.numTyres = 4; // not accessible
	c.numGears = 5;
	
}





