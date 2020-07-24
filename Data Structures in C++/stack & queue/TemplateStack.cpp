#include<iostream>
using namespace std;
#include<climits>

template <typename T>
class StackUsingArray{
	T *data;
	int nextIndex;
	int capacity;
	public:
		
		StackUsingArray(){
			data = new T[4];
			nextIndex = 0;
			capacity = 4;
		}
		
		//return the number of elements present in stack
		int size(){
			return nextIndex;
		}
		
		bool isEmpty(){
		/*	if(nextIndex == 0){
				return true;
			}
			else{
				return false;
			}
		*/
		//shortcut
		
		return nextIndex == 0;
	}
	
	// insert element
	void push(T element){
		if(nextIndex == capacity) {  // can be resolved in O(1)
			T *newData = new T[2 * capacity];
			for(int i = 0; i < capacity; i++) {
			   newData[i] = data[i];	
			}
			capacity *= 2;
			delete [] data;
			data = newData; //point to newData
			
		/*	cout << "Stack full" << endl;
			return;*/
			
		}
		
		data[nextIndex] = element;
		nextIndex++;
	}
	
	// delete element
	T pop(){
		if(isEmpty()) {
			cout << "stack is empty" << endl;
			return 0;
		}
		nextIndex--;
		return data[nextIndex];
	} 
	
	T top() {
		if(isEmpty()) {
			cout << "stack is Empty" << endl;
			return 0;
 		}
		return data[nextIndex - 1];
	}
};



int main(){
	StackUsingArray<char> s; // create stack of size 4
	s.push(10); // push elements
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50); //can push in dynamic stack
	
	cout << s.top() << endl;
	
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	
	cout << s.size() << endl;
	
	cout << s.isEmpty() << endl;
 }


