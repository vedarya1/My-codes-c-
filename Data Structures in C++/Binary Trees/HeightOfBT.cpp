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
			right = NULL;
		}
};

BinaryTreeNode<int>* takeInputLW() {
	int rootData;
	cin >> rootData;
	BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
	queue<BinaryTreeNode<int>*> q;
	q.push(root);
	while(!q.empty()) {
		BinaryTreeNode<int> *currentNode = q.front();
		q.pop();
		int leftChildData, rightChildData;
		cin >> leftChildData;
		if(leftChildData != -1) {
			BinaryTreeNode<int> *leftNode = new BinaryTreeNode<int>(leftChildData);
			currentNode->left = leftNode;
			q.push(leftNode);
		}
		cin >> rightChildData;
		if(rightChildData != -1) {
			BinaryTreeNode<int> *rightNode = new BinaryTreeNode<int>(rightChildData);
			currentNode->right = rightNode;
			q.push(rightNode);
		}
	}
	return root;
}

int height(BinaryTreeNode<int> *root) {
	if(root == NULL) {
		return 0;
	}
	int ans = 0;
	int leftHeight = height(root->left);
	int rightHeight = height(root->right);
	if(leftHeight >= rightHeight) {
		ans =  leftHeight;
	}
	else {
		ans =  rightHeight;
	}
	
	return ans + 1;
}
// 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
int main() {
	BinaryTreeNode<int>* root = takeInputLW();
	cout << height(root) << endl;
	
}
