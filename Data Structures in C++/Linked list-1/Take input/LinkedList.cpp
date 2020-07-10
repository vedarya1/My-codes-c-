#include<iostream>
using namespace std;
#include "Node.cpp"
Node* takeInput_Better(){
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


Node* takeInput(){
	 int data;
	 cin>>data;
	 Node *head = NULL;
	 while( data!= -1){
	 	Node *newNode = new Node(data); //for not deallocate use dynamic allocation
	 	if(head==NULL){ 
	 	  head = newNode;  
		 }
	 	else{
	 		Node *temp = head;
	 		while(temp->next != NULL){
	 			temp = temp->next;
			 }
			 temp->next = newNode;
		 }
	 	
	 	cin>>data;
	 	
	 }
	 return head;
}

void print(Node *head){
	//Node *temp = head;
	
	while(head != NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	
	/*temp = head;
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	*/
}



int main(){
	
	Node *head = takeInput(); //order of O(n2)
	Node *x = takeInput_Better(); //order of O(n)
	print(head);
	print(x);
	
	//Statically
  /*  Node n1(1);
	Node *head  = &n1;
	
	Node n2(2);
	Node n3(3);
	Node n4(4);
	Node n5(5);
	
	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	n4.next = &n5;
	
	//print
	print(head);
	
	print(head);
	*/



/*	
	
	n1.next = &n2;
	
	cout<<n1.data<<" "<<n2.data<<endl;

*/

    //dynamically
 /*  Node *n1 = new Node(1);
   Node *head = n1;
   Node *n2 = new Node(2);
   Node *n3 = new Node(3);
   Node *n4 = new Node(4);
   Node *n5 = new Node(5);
   
   n1->next = n2;
   n2->next = n3;
   n3->next = n4;
   n4->next = n5;
   
   print(head);
    */
}

