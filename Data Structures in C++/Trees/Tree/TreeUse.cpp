#include<iostream>
#include "TreeNode.h"
using namespace std;
#include<queue>
/*
TreeNode<int>* takeInput() {
	// Enter rootData
	int rootData;
	cout << "Enter data:" << endl;
	cin >> rootData; 
	
	// create a TreeNode type root
	TreeNode<int>* root = new TreeNode<int>(rootData);
	
	// Enter number of recursive call
	int n;
	cout << "Enter no of children of " << rootData << endl;
	cin >> n;
	// recursive call
	for(int i = 0; i < n; i++) {
		TreeNode<int>* child = takeInput();
		root->children.push_back(child);
	}
	// return root
	return root;
}

void printTree(TreeNode<int>* root) {
	// edge case
	if(root == NULL) {
		return;
	}
	
	// working like a base case
	cout << root->data << ":";
	
	for( int i = 0; i < root->children.size(); i++) {
		cout << root->children[i]->data << ",";
	}
	cout << endl;
	for( int i = 0; i < root->children.size(); i++) {
		printTree(root->children[i]);
	}
}*/

TreeNode<int>* takeInputLW() {
	int rootData;
	cout << "Enter root data" << endl;
	cin >> rootData;
	TreeNode<int>* root = new TreeNode<int>(rootData);
	
	queue<TreeNode<int>*> pendingNodes;
	
	pendingNodes.push(root);
	while(pendingNodes.size() != 0) {
		TreeNode<int>* front = pendingNodes.front();
		pendingNodes.pop();
		cout << "Enter num of children of " << front->data << endl;
		int numChild;
		cin >> numChild;
		for(int i = 0; i < numChild; i++) {
		int childData;
		cout << "Enter" << i << "th child of " << front->data << endl;
		cin >> childData;
		TreeNode<int>* child = new TreeNode<int>(childData);
		front->children.push_back(child);
		pendingNodes.push(child);	
		}
	}
	return root;
}

void printTreeLW(TreeNode<int>* root) {
	queue<TreeNode<int>*> pending;
	pending.push(root);
	
	while(pending.size() != 0) {
		cout << pending.front()->data << ":";
		for(int i = 0; i < pending.front()->children.size(); i++) {
			cout << pending.front()->children[i]->data;
			pending.push(pending.front()->children[i]);
			if(i < pending.front()->children.size() - 1){
				cout << ",";
			}
		}
		cout << endl;
		pending.pop();
	}
}

int numNodes(TreeNode<int>* root) {
	
	// edge case
	if(root == NULL) {
		return 0;
	}
	// initial height is 1
	int ans = 1;
	// iterate all children and check
	for(int i = 0; i < root->children.size(); i++) {
		// current value of output
		ans += numNodes(root->children[i]);
	}
	
	return ans;
}




int main() {
/*	TreeNode<int>* root = new TreeNode<int>(1);
	TreeNode<int>* node1 = new TreeNode<int>(2);
	TreeNode<int>* node2 = new TreeNode<int>(3);
	root->children.push_back(node1);
	root->children.push_back(node2);*/
	TreeNode<int>* root = takeInputLW();
	printTreeLW(root);
	int ans  = numNodes(root);
	cout << ans;
	
	// TODO delete
}
