#include<iostream>
using namespace std;

class Node{
	public:
		
		int data;
		Node *next;
		
		Node(int data){
			this->data = data;
			this->next = NULL;
		}
};


Node *takeInput(){
	int data;
	cin>>data;
	Node *head = NULL, *tail =NULL;
	while(data != -1){
		Node *newNode = new Node(data);
		if(head == NULL){
			head = newNode;
			tail = newNode;
		}
		else{
			tail->next = newNode;
			tail = newNode;
		}
		cin>>data;
	}
	return head; 
}

Node *removeDuplicates(Node *head){
	if( head == NULL || head->next == NULL){
		return head;
	}
	Node *t1 = head;
	Node *t2 = head->next;
	while(t2 != NULL){
		if(t1->data != t2->data){
			t1->next = t2;
			t1 = t2;
			t2 = t2->next;
		}
		else if(t1->data == t2->data){
			t2 = t2->next;
			Node *a = t1->next;
			delete a;
			t1->next = t2;
			
		}
		t1->next = t2;
	}
	return head;
}


void print(Node *head){
	Node *temp = head;
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		Node *head = takeInput();
		head = removeDuplicates(head);
		print(head);
	}
	return 0;
}
