#include<iostream>
using namespace std;
#include<vector>
tenplate<typename T>
class TreeNode {
	public:
		T data;
		vector<TreeNode<T>*> children;
		
		// default constructor
		TreeNode(T data) {
			this->data = data;
		}
		
		// dynamic deallocation of children
		// destructor
		~TreeNode() {
			for(int i = 0; i < children.size(); i++) {
				delete children[i];
			}
		}
};

#include <queue>
TreeNode<int>* takeInputLevelWise() {
	int rootData;
	cin >> rootData;
	TreeNode<int>*  root = new TreeNode<int>(rootData);
	
	queue<TreeNode<int>*> pendingNodes;
	
	pendingNodes.push(root);
	while (pendingNodes.size() != 0) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++) {
            int childData;
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

TreeNode<int>* maxSumNode(TreeNode<int>* root) {
	
}
