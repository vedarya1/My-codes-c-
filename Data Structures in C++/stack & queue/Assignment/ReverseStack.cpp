#include<iostream>
using namespace std;
#include<stack>

// void type coz not return only edit and update
// call address of s1 and s2
void reverseStack(stack<int> &input, stack<int> &extra) {
	int size =  input.size();// size of first stack
	
	// at O(n) remove data from stack1 and update in stack2 
	// also again point stack1 to stack2 OR put back into stack1
	for( int i = 0; i < size; i++) {
		extra.push(input.top()); // exchange
		input.pop(); // delete
	}
	input =  extra; //put back 
}

int main() {
	stack<int> s1, s2;
	int size;
	cin >> size;
	// take input elements
	int val;
	for(int i = 0; i < size; i++) {
		cin >> val;
		s1.push(val);
	}
	// call revere function
	reverseStack(s1, s2);
	
	// print and delete until stack is not empty
	while(!s1.empty()) {
		cout << s1.top() << " ";
		s1.pop();
	}
	
}
