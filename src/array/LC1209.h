//
// Created by 梁俊华 on 5/5/22.
//

#ifndef LCFULL_LC1209_H
#define LCFULL_LC1209_H

#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<int> _stack;
        int wr = 0;
        for (int r = 0; r < s.size(); ++r, ++wr) {
            s[wr] = s[r];
            if (_stack.empty() or s[wr] != s[wr-1]) {
                _stack.push(1);
            } else if (++_stack.top() == k) {
                wr -= k;
                _stack.pop();
            }
        }
        return s.substr(0, wr);
    }
};

#endif//LCFULL_LC1209_H
