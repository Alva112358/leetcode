//
// Created by 梁俊华 on 4/14/22.
//

#ifndef LCFULL_LC700_H
#define LCFULL_LC700_H

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        auto node = root;
        while (node != nullptr) {
            if (node->val == val) {
                return node;
            } else if (node->val > val) {
                node = node->left;
            } else {
                node = node->right;
            }
        }
        return nullptr;
    }
};

#endif//LCFULL_LC700_H
