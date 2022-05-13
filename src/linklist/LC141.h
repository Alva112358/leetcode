//
// Created by 梁俊华 on 3/7/22.
//

#ifndef LCFULL_LC141_H
#define LCFULL_LC141_H

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        auto slow = head;
        auto fast = head;

        while (fast != nullptr and fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                return true;
            }
        }

        return false;
    }
};

#endif//LCFULL_LC141_H
