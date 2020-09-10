#include<iostream>
using namespace std;


template <typename T>
class BinaryTreeNode{
	public:
		T data;
		BinaryTreeNode<int> *left;
		BinaryTreeNode<int> *right;
		
		BinaryTreeNode(T data) {
			this->data = data;
			left = NULL;
			right = NULL;
		}
};

#include<queue>
BinaryTreeNode<int>* takeInputLW() {
	// taking root data
	int rootData;
	cin >> rootData;
	// if next is -1 then pretend to be NULL
	if(rootData == -1) {
		return NULL;
	}
	// create new node 
	BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
	// create a queue
	queue<BinaryTreeNode<int>*> q;
	// push root in queue
	q.push(root);
	// run the loop  until queue is not empty
	while(!q.empty()) {
		// create another node and take front data of queue
		BinaryTreeNode<int> *cn = q.front();
		// delete first from queue
		q.pop();
		// left child & right child data
		int lc, rc;
		cin >> lc;
		if(lc != -1) {
			// if left child is not null then create a left node with data left child
			BinaryTreeNode<int> *ln = new BinaryTreeNode<int>(lc);
			// connect left node to child node
			cn->left = ln;
			// push left node into queue
			q.push(ln); 
		}
		cin >> rc;
		if(rc != -1) {
			BinaryTreeNode<int> *rn = new BinaryTreeNode<int>(rc);
			cn->right = rn;
			q.push(rn);
 		}
	}
	return root;
}

bool isNodePresent(BinaryTreeNode<int> *root, int x) {
	if(root == NULL) {
		return false;
	}
	else if (root->data == x) {
		return true;
	}
	
	return isNodePresent(root->left, x) || isNodePresent(root->right, x);
}
// 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
int main() {
	BinaryTreeNode<int> *root = takeInputLW();
	int x;
	cin >> x;
	if(isNodePresent(root, x)) {
		cout << "true";
	}
	else
	{
		cout << "false";
	}
}
