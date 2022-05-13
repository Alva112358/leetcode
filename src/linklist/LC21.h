//
// Created by 梁俊华 on 3/7/22.
//

#ifndef LCFULL_LC21_H
#define LCFULL_LC21_H

#include "../../model/linkedlist.h"

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        auto* head = new ListNode(0);
        auto* list = head;
        auto* l1 = list1;
        auto* l2 = list2;

        while (l1 != nullptr and l2 != nullptr) {
            if (l1->val < l2->val) {
                list->next = l1;
                l1 = l1->next;
            } else {
                list->next = l2;
                l2 = l2->next;
            }
            list = list->next;
        }

        list->next = l1 == nullptr ? l2 : l1;

        return head->next;
    }
};

#endif//LCFULL_LC21_H
