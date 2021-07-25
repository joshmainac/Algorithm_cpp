#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
	
};

vector<int> inorderTraversal(TreeNode* root);
void inorderTraversal(TreeNode* root, vector<int >& v);

int main()
{
	TreeNode root1(1);
	TreeNode root2(2);
	TreeNode root3(3);
	root1.left = nullptr;
	root1.right = &root2;
	root2.left = &root3;
	root2.right = nullptr;
	


	vector<int> ans;
	ans = inorderTraversal(&root1);




	return 0;
}

vector<int> inorderTraversal(TreeNode* root)
{
	vector<int >v;
	if (root == nullptr)
	{
		return v;
	}
	inorderTraversal(root, v);
	return v;



}


void inorderTraversal(TreeNode* root, vector<int >& v)
{
	if (root == nullptr)
	{
		return;
	}
	inorderTraversal(root->left, v);
	v.push_back(root->val);
	inorderTraversal(root->right, v);



}