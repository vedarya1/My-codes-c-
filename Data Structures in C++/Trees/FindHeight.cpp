#include<iostream>
using namespace std;
#include<vector>
// Tree Node structure or class
template <typename T>
class TreeNode{
	public :
		T data;
		// create a node type vector
		vector<TreeNode<T>*> children;
		
		// one argument type default constructor
		TreeNode(T data) {
			this->data = data;
		}
		
		// destructor
		~TreeNode() {
			for(int i = 0; i < children.size(); i++) {
				delete children[i];
			}
		}
};

// use of Queue to take input levelwise
#include<queue>
// create function
TreeNode<int>* takeInputLevelWise() {
	// taking first data as input from user
	int rootData;
	cin >> rootData;
	// root node is created
	TreeNode<int>* root = new TreeNode<int>(rootData);
	
	// create queue type pending Nodes
	queue<TreeNode<int>*> pendingNodes;
	
    // push first data into queue
    pendingNodes.push(root);
    // check if queue is empty 
	while(pendingNodes.size() != 0) {
		// creating a node by reading first data in queue
		TreeNode<int>* front = pendingNodes.front();
		// delete the data from queue
		pendingNodes.pop();
		// no of child of root as input from user
		int numChild;
		cin >> numChild;
		// iterate for no of childs
		for(int i = 0; i < numChild; i++) {
			// take childData one by one
			int childData;
			cin >> childData;
			// create a node of child and connect it to root
			TreeNode<int>* child = new TreeNode<int>(childData);
			// connect with front or root
			front->children.push_back(child);
			//  and also push children into queue
			pendingNodes.push(child);
			
		}
	}
	return root;
}

// function to calculate height of tree
int height(TreeNode<int>* root) {
	if(root == NULL) {
		return 0;
	}
	int max = 0;
	for(int i = 0; i < root->children.size(); i++) {
		int temp = height(root->children[i]);
		if(temp > max) {
			max  = temp;
		}
	}
	return max + 1;
}

int main() {
	// calling functions
	TreeNode<int>* root = takeInputLevelWise();
	cout << height(root) << endl;
}
