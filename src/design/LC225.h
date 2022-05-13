//
// Created by 梁俊华 on 5/5/22.
//

#ifndef LCFULL_LC225_H
#define LCFULL_LC225_H

#include <queue>

using namespace std;

// Implement stack using one queue.
class MyStack {
public:
    MyStack() {

    }

    // Time complexity : O(n)
    // Space complexity : O(1)
    void push(int x) {
        q.push(x);
        int sz = q.size();
        while (sz-- > 1) {
            q.push(q.front());
            q.pop();
        }
    }

    // Time = O(1).
    // Space = O(1).
    int pop() {
        if (empty()) {
            return -1;
        }

        int x = q.front();
        q.pop();
        return x;
    }

    // Time = O(1).
    // Space = O(1).
    int top() {
        if (empty()) {
            return -1;
        }

        return q.front();
    }

    // Time = O(1).
    // Space = O(1).
    bool empty() {
        return q.empty();
    }

private:
    queue<int> q;
};

#endif//LCFULL_LC225_H
