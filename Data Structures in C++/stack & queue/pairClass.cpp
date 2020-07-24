#include<iostream>
using namespace std;

template <typename T, typename V>
class Pair{
	T x;
	V y;
	
	public :
	 void setX(T x) {
	 	this->x = x;
	 }	
	 
	 T getX() {
	 	return x;
	 }
	 
	 void setY(V y) {
	 	this->y = y;
	 }
	 
	 V getY() {
	 	return y;
	 }
	 
};

int main() {
	
	Pair<int, double> p1;
	p1.setX(100.34);
	p1.setY(100.34);
	
	cout << p1.getX() << " " << p1.getY() << endl;
	
	/*
	Pair<int> p1;
	p1.setX(10);
	p1.setY(20);
	
	cout << p1.getX() << " " << p1.getY() << endl;
	
	
	Pair<double> p2;
	p2.setX(100.34);
	p2.setY(34.21);
	
	cout << p2.getX() << " " << p2.getY() << endl;
	
	Pair<char> p3; */
}





