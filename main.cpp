#include <iostream>
#include "TreeNode.hpp"
#include "Solution.hpp"

using std::cout;
using std::endl;

void make_new_tree(TreeNode** tree);
void print_tree(TreeNode* tree);
void print_result(vector<vector<int>>& res);

int main(void)
{
    TreeNode* tree = nullptr;
    make_new_tree(&tree);
    Solution s;
    vector<vector<int>> result;
    result = s.levelOrder(tree);
    print_result(result);
    return 0;
}

void make_new_tree(TreeNode** tree)
{
    TreeNode* ptr = *tree;
    ptr = new TreeNode(3);
    ptr->left = new TreeNode(9);
    ptr->right = new TreeNode(20);
    ptr->right->left = new TreeNode(15);
    ptr->right->right = new TreeNode(7);
    cout << "Tree: " << endl;
    print_tree(ptr);
    *tree = ptr;
}

void print_tree(TreeNode* tree)
{
    if (tree == nullptr)
        return;
    cout << tree->val << endl;
    print_tree(tree->left);
    print_tree(tree->right);
}

void print_result(vector<vector<int>>& res)
{
    vector<vector<int>>::iterator outer = res.begin();
    vector<vector<int>>::iterator outer_end = res.end();
    cout << "Result vector is:" << endl;
    cout << "{";
    for (vector<vector<int>>::iterator it_out = outer; it_out != outer_end; ++it_out)
    {
        cout << "[";
        for (auto it_in : *it_out)
        {
            cout << it_in << " ";
        }
        cout << "], ";
    }
    cout << "}." << endl;
}
