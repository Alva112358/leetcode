//
// Created by 梁俊华 on 3/7/22.
//

#ifndef LCFULL_LINKEDLIST_H
#define LCFULL_LINKEDLIST_H

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

#endif//LCFULL_LINKEDLIST_H
