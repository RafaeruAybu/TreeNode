//
// Created by Isadora Gearhead on 11/20/22.
//

#ifndef VECTORS_TREENODE_HPP
#define VECTORS_TREENODE_HPP

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

#endif //VECTORS_TREENODE_HPP
