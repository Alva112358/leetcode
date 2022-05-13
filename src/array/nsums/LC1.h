//
// Created by 梁俊华 on 5/5/22.
//

#ifndef LCFULL_LC1_H
#define LCFULL_LC1_H

#include <vector>
#include <unordered_map>
#include <stdexcept>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); ++i) {
            int t = target - nums[i];
            if (m.count(t)) {
                return {m[t], i};
            }
            m[nums[i]] = i;
        }
        throw std::invalid_argument("Invalid parameters.");
    }
};

#endif//LCFULL_LC1_H
