#include<iostream>
using namespace std;


class Node{
	public:
		int data;
		Node *next;
		
		Node(int data){
			this->data = data;
			next = NULL;
		}
};



Node* takeInput(){
	 int data;
	 cin>>data;
	 Node *head = NULL;
	 Node *tail = NULL;
	 while( data!= -1){
	 	Node *newNode = new Node(data); //for not deallocate use dynamic allocation
	 	if(head==NULL){ 
	 	  head = newNode;
		  tail = newNode  ;
		 }
	 	else{
	 		tail->next = newNode;
	 		tail = tail->next;
	 		//or
	 		// tail = newNode;
		 }
	 	
	 	cin>>data;
	 	
	 }
	 return head;
}

//now return type changes to NOde* bcoz of change in head value
Node* insertNode(Node *head,int i, int data){
	Node *newNode = new Node(data);
	int count = 0;
	Node *temp = head;
	
	//for i = 0,special case
	if(i == 0){
		newNode->next = head;
		head = newNode;
		return head;
	}
	
	while( temp != NULL && count < i-1){  //segmentation fault check due to null have not next
	  temp = temp->next;
	  count++;	
	}
	
	//1st method
	if(temp != NULL){ //now fine 
	Node *a = temp->next;
	temp->next = newNode;
	newNode->next = a;
		}
		return head;
}


void print(Node *head){
	
	while(head != NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
}



int main(){
	
	Node *head = takeInput(); //order of O(n)
	print(head);
	int i,data;
	cin>>i>>data;
	head = insertNode(head,i,data); //updata head address
    print(head);
	

}
