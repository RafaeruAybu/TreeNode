//
// Created by Isadora Gearhead on 11/20/22.
//

#ifndef VECTORS_SOLUTION_HPP
#define VECTORS_SOLUTION_HPP
#include "TreeNode.hpp"
#include <vector>

using std::vector;

class Solution {
private:
    void recursive_travel(TreeNode* root, vector<vector<int>>& result, int lvl);

public:
    vector<vector<int>> levelOrder(TreeNode* root);
};


#endif //VECTORS_SOLUTION_HPP
