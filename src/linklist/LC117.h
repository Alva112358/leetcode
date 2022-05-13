//
// Created by 梁俊华 on 5/13/22.
//

#ifndef LCFULL_LC117_H
#define LCFULL_LC117_H

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(nullptr), right(nullptr), next(nullptr) {}

    Node(int _val) : val(_val), left(nullptr), right(nullptr), next(nullptr) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};

class Solution {
public:
    Node* connect(Node* root) {
        auto curr = root;
        auto next = curr;
        Node* prev = nullptr;

        while (next != nullptr) {
            curr = next;
            prev = nullptr;
            next = nullptr;
            while (curr != nullptr) {
                if (curr->left != nullptr) {
                    if (next == nullptr) {
                        next = curr->left;
                    }
                    if (prev != nullptr) {
                        prev->next = curr->left;
                        prev = prev->next;
                    } else {
                        prev = curr->left;
                    }
                }
                if (curr->right != nullptr) {
                    if (next == nullptr) {
                        next = curr->right;
                    }
                    if (prev != nullptr) {
                        prev->next = curr->right;
                        prev = prev->next;
                    } else {
                        prev = curr->right;
                    }
                }
                curr = curr->next;
            }
        }

        return root;
    }
};

#endif//LCFULL_LC117_H
