#include<iostream>
#include "BinaryTreeNode.h"
using namespace std;
#include<queue>
BinaryTreeNode<int>* takeInputLevelWise() {
		// taking node data
	int rootData;
	cout << "Enter root data: " << endl;
	cin >> rootData;
	// if -1 is there then terminate coz not elements ahead
	if(rootData == -1) {
		return NULL;
	}
		// creating new node
	BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
	queue<BinaryTreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	while(pendingNodes.size() != 0) {
		BinaryTreeNode<int>* front = pendingNodes.front();
		pendingNodes.pop();
		cout << "Enter left child of " << front->data << endl;
		int leftChildData;
		cin >> leftChildData;
		if(leftChildData != -1) {
			BinaryTreeNode<int> *child = new BinaryTreeNode<int>(leftChildData);
			front->left = child;
			pendingNodes.push(child);
		}
			cout << "Enter right child of " << front->data << endl;
		int rightChildData;
		cin >> rightChildData;
		if(rightChildData != -1) {
			BinaryTreeNode<int> *child = new BinaryTreeNode<int>(rightChildData);
			front->right = child;
			pendingNodes.push(child);
		}
		
	}
return root;	
}

void printTreeLevelWise(BinaryTreeNode<int>* root) {
	if(root == NULL) {
		return;
	}
	queue<BinaryTreeNode<int>*> pending;
	pending.push(root);
	while(pending.size() != 0) {
		cout << pending.front()->data << ":";
	    if(pending.front()->left == NULL) {
	    	cout << "L:-1";
		}
		if(pending.front()->left != NULL) {
			cout << "L:" << pending.front()->left->data << ",";
			pending.push(pending.front()->left);
		}
		if(pending.front()->right == NULL) {
			cout << "R:-1";
		}
		if(pending.front()->right != NULL) {
			cout << "R:" << pending.front()->right->data << ",";
			pending.push(pending.front()->right);
		}
		cout << endl;
		pending.pop();
	}
}

void printTree(BinaryTreeNode<int>* root) {
	// Base case
	if(root == NULL) {
		return;
	}
	cout << root->data << ":";
	if(root->left != NULL) {
		cout << "L" << root->left->data;
	}
	
	if(root->right != NULL) {
		cout << "R" << root->right->data;
	}
	cout << endl;
	printTree(root->left);
	printTree(root->right);
}

BinaryTreeNode<int>* takeInput() {
	// taking node data
	int rootData;
	cout << "Enter data: " << endl;
	cin >> rootData;
	// if -1 is there then terminate coz not elements ahead
	if(rootData == -1) {
		return NULL;
	}
	// creating new node
	BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
	// using takeInput function to create node in the left and right of root
	BinaryTreeNode<int>* leftChild = takeInput();
	BinaryTreeNode<int>* rightChild = takeInput();
	// connecting to root
	root->left = leftChild;
	root->right = rightChild;
	return root;
}

int numNodes(BinaryTreeNode<int>* root) {
	if(root == NULL) {
		return 0;
	}
	return 1 + numNodes(root->left) + numNodes(root->right);
}
// 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
int main() {
/*	BinaryTreeNode<int>* root = new BinaryTreeNode<int>(1);
	BinaryTreeNode<int>* node1 = new BinaryTreeNode<int>(2);
	BinaryTreeNode<int>* node2 = new BinaryTreeNode<int>(3);
	root->left = node1;
	root->right = node2; */
	BinaryTreeNode<int>* root = takeInputLevelWise();
	printTreeLevelWise(root);
	cout << "Num: " << numNodes(root);
	delete root;
}
