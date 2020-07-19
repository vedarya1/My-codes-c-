#include<iostream>
using namespace std;
#include<climits>
class StackUsingArray{
	int *data;
	int nextIndex;
	int capacity;
	public:
		
		StackUsingArray(int totalSize){
			data = new int[totalSize];
			nextIndex = 0;
			capacity = totalSize;
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
	void push(int element){
		if(nextIndex == capacity){
			cout << "Stack full" << endl;
			return;
		}
		
		data[nextIndex] = element;
		nextIndex++;
	}
	
	// delete element
	int pop(){
		if(isEmpty()) {
			cout << "stack is empty" << endl;
			return INT_MIN;
		}
		nextIndex--;
		return data[nextIndex];
	} 
	
	int top() {
		if(isEmpty()) {
			cout << "stack is Empty" << endl;
			return INT_MIN;
 		}
		return data[nextIndex - 1];
	}
};



int main(){
	StackUsingArray s(4); // create stack of size 4
	s.push(10); // push elements
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50); //cannt push
	
	cout << s.top() << endl;
	
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	
	cout << s.size() << endl;
	
	cout << s.isEmpty() << endl;
 }


