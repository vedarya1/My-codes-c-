#include<iostream>
using namespace std;

// class for linked list
template <typename T>
class Node {
	public :
	T data;
	Node<T> *next;
	
	Node(T data) {
		this->data = data;
		next = NULL;
	} 
	
};

// class for stack
template<typename T>
class Stack {
	Node<T> *head;
	int size; // no of elements in stack
	
	public :
		
		Stack() {
			head = NULL;
			size = 0;
		}
		
		int getSize() {
			return size;
		}
		
		bool isEmpty() {
			return size == 0;
		}
		
		void push(T element) {
		  Node<T> *newNode = new Node<T>(element);
		  newNode->next = head;
		  head = newNode;
		  size++;	
		}
		
		T pop() {
			if(isEmpty()) {
				return 0;
			}
			T ans = head->data;
			Node<T> *temp = head;
			head = head->next;
			delete temp;
			size--;
			return ans;
		}
		
		T top() {
		    if(isEmpty()) {
				return 0;
			}
			
			return head->data;	
		}
};

int main() {
    Stack<char> s; // create stack of size 4
	s.push(100); // push elements
	s.push(101);
	s.push(102);
	s.push(103);
	s.push(104); //can push in dynamic stack
	
	cout << s.top() << endl;
	
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	
	cout << s.getSize() << endl;
	
	cout << s.isEmpty() << endl;
}
