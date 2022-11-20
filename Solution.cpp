//
// Created by Isadora Gearhead on 11/20/22.
//

#include "Solution.hpp"

void Solution::recursive_travel(TreeNode* root, vector<vector<int>>& result, int lvl)
{
    if (root == nullptr) {
        return;
    }
    auto begin = result.begin();
    auto end = result.end();
    int delt = end - begin;
    if (delt == lvl)
        result.push_back(vector<int>());
    result[lvl].push_back(root->val);
    lvl++;
    recursive_travel(root->left, result, lvl);
    recursive_travel(root->right, result, lvl);
}

vector<vector<int>> Solution::levelOrder(TreeNode* root)
{
    vector<vector<int>> result;
    recursive_travel(root, result, 0);
    return result;
}
