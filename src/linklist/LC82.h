//
// Created by 梁俊华 on 3/9/22.
//

#ifndef LCFULL_LC82_H
#define LCFULL_LC82_H

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr or head->next == nullptr) {
            return head;
        }

        auto dummyHead = new ListNode;
        auto prev = dummyHead;
        auto curr = head;
        while (curr != nullptr) {
            auto nextPtr = curr;
            while (nextPtr != nullptr and nextPtr->val == curr->val) {
                nextPtr = nextPtr->next;
            }
            if (curr->next == nextPtr) {
                prev->next = curr;
                prev = prev->next;
            } else {
                prev->next = nullptr;
            }
            curr = nextPtr;
        }

        return dummyHead->next;
    }
};

#endif//LCFULL_LC82_H
