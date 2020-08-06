#include<vector>
using namespace std; // must to use vector

template <typename T>
class TreeNode {
	public :
		T data;
		// store children
		vector<TreeNode<T>*> children;
		
		// default constructor
		TreeNode(T data) {
			this->data = data;
		}
		
		~TreeNode() {
			for(int i =0; i < children.size(); i++) {
				
				delete children[i];
			}
		}
};
