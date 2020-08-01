#include<iostream>
using namespace std;

template <typename T>
class Node {
	public :
		T data;
		Node<T> *next;
		
		// Node class constructor
		Node(T data) {
			this->data = data;
			next = NULL;
		}
};

// Queue class
template <typename T>
class Queue {
	Node<T> *head;
	Node<T> *tail;
	int size;
	
	public :
		// Queue class constructor
		Queue() {
			head = NULL;
			tail = NULL;
			size = 0;
		}
		
		// getSize to get size of Queue
		int getSize() {
			return size;
		}
		
		// check Queue is Empty or not
		bool isEmpty() {
			return size == 0;
		}
		
		// insert elements
		void enqueue(T element) {
			Node<T> *newNode = new Node<T>(element);
			// check if head is NULL or queue is empty first
			if(head == NULL) {
				head = newNode;
				tail = newNode;
			}
			tail->next = newNode;
			tail = tail->next;
			size++;
		}		
		
		// read and print
		T front() {
			if(isEmpty()) {
				return 0;
			}
			return head->data;
		}
		
		// read and print then delete
		T dequeue() {
			if(isEmpty()) {
				return 0;
			}
			T data = head->data;
			Node<T> *temp = head;
			head = head->next;
			delete temp;
			size--;
			return data;
		} 
		
};

int main() {
    
    Queue<int> q;
    
    int choice;
    cin >> choice;
    int input;
    
    while (choice !=-1) {
        if(choice == 1) {
            cin >> input;
            q.enqueue(input);
        }
        else if(choice == 2) {
            int ans = q.dequeue();
            if(ans != 0) {
                cout << ans << endl;
            }
            else {
                cout << "-1" << endl;
            }
        }
        else if(choice == 3) {
            int ans = q.front();
            if(ans != 0) {
                cout << ans << endl;
            }
            else {
                cout << "-1" << endl;
            }
        }
        else if(choice == 4) {
            cout << q.getSize() << endl;
        }
        else if(choice == 5) {
            cout << q.isEmpty() << endl;
        }
        cin >> choice;
    }
    
}
