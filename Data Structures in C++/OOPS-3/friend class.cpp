#include<iostream>
using namespace std;

class Bus{
	public:
		void print() ;
};

void test();

class Truck{
	private :
		int x;
		
	protected :
	int y;	
	
	public : 
		int z;
		
		// friend class Bus; // if a lot of functions are in Bus class, we can make Bus class as friend
		
	friend void Bus :: print();	
	
	friend void test();
};

// Access x, y from from Truck 
void Bus :: print() {
	Truck t;
	t.x = 10;
	t.y = 20;
	cout << t.x << " " << t.y << endl; 
}

void test() {
	// Access Truck private
		Truck t;
	t.x = 10;
	t.y = 20;
	cout << t.x << " " << t.y << endl;
}

int main() {
  Bus b;
  b.print();
  test();
}



