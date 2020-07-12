#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
		
		Node(int data){  //one argument constructor
			this->data= data;
			this->next = NULL;
		}
};

Node *takeInput(){
	int data;
	cin>>data;
	Node *head = NULL;
	Node *tail = NULL;
	while(data != -1){
		Node *newNode = new Node(data);
		if(head == NULL){
			head = newNode;
			tail = newNode;
		}
		else{
			tail->next = newNode;//new
			tail = newNode;
		}
		cin>>data;
	}
	return head;
}

int length(Node *head){
	int count = 0;
	while(head != NULL){
		count++;
		head = head->next;
	}
	return count;
}



int main(){
     int t;
     cin>>t;
     while(t--){
     	Node *head = takeInput();
     	cout<<length(head)<<endl;
	 }
	 return 0;
}
