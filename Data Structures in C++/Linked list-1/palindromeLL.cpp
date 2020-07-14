#include<iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};
Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}
Node* reverse(Node *h2)
{
    if(h2 == NULL || h2->next==NULL){
        return h2;
    }
    Node * temp = reverse(h2->next);
    h2->next->next = h2;
    h2->next = NULL;
    return temp;
}
// int length(Node *head){
//     int count = 0;
//     while(head != NULL){
//         count ++ ;
//         head = head->next;
//     }
//     return count;
// }
Node* middle(Node *head){
    Node*slow = head;
    Node * fast = head->next;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

bool isPalindrome(Node *head)
{
    
     if(head == NULL || head->next == NULL){
         return true;
     }
//     int len = length(head);
//     int mid = (len+1)/2;
//     Node *h1 = head,*h2;
//     int i = 0;
//     Node *temp  = h1;
//     while(i < mid-1){
//         i++;
//         temp = temp->next;
//     }
//     h2 =  temp->next;
//     temp->next == NULL;
    
//     reverse(h2);
    Node *h1 = head;
    Node *temp = middle(head);
    Node * h2 = temp->next;
    temp->next = NULL;
    h2 = reverse(h2);
    while(h1 != NULL && h2 != NULL){
        if(h1->data == h2->data){
            h1 = h1->next;
            h2 = h2->next;
            
          }
          else return false;
            // if(h1->data != h2->data){
            // return false;
     }
    return true;
    }
    
    
    int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		Node *head = takeinput();
		bool ans = isPalindrome(head);

		if (ans) cout << "true";
		else cout << "false";

		cout << endl;
	}

	return 0;
}
