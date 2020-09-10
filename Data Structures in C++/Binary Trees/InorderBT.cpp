#include<iostream>
using namespace std;
#include<queue>
template <typename T>
class BinaryTreeNode{
	public:
		T data;
		BinaryTreeNode<int> *left;
		BinaryTreeNode<int> *right;
		
		BinaryTreeNode(T data) {
			this->data = data;
			left = NULL;
			right =  NULL;
		}
		
};

BinaryTreeNode<int> *takeInputLW() {
	int rootData;
	cin >> rootData;
	BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
	queue<BinaryTreeNode<int>*> q;
	q.push(root);
	while(!q.empty()) {
		BinaryTreeNode<int> *currentNode = q.front();
		q.pop();
		int leftData, rightData;
		cin >> leftData;
		if(leftData != -1) {
			BinaryTreeNode<int> *leftNode = new BinaryTreeNode<int>(leftData);
			currentNode->left = leftNode;
			q.push(leftNode); 
		}
		cin >> rightData;
		if(rightData != -1) {
			BinaryTreeNode<int> *rightNode = new BinaryTreeNode<int>(rightData);
			currentNode->right = rightNode;
			q.push(rightNode);
		}
	}
	return root;
}

void inorder(BinaryTreeNode<int> *root) {
	if(root == NULL) {
		return;
	}
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right); 
}

// 

int main() {
	BinaryTreeNode<int> *root = takeInputLW();
	inorder(root);
}
