//
// Created by 梁俊华 on 4/11/22.
//

#ifndef LCFULL_LC1260_H
#define LCFULL_LC1260_H

#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        for (int i = 0; i < k; ++i) {
            shift(grid);
        }
        return grid;
    }

private:
    void shift(vector<vector<int>>& grid)s {
        const int m = grid.size();
        const int n = grid[0].size();

        for (int i = 0; i < m; ++i) {
            int curLast = grid[i][n-1];
            for (int j = n - 2; j >= 0; --j) {
                grid[i][j+1] = grid[i][j];
            }
            grid[i][0] = curLast;
        }

        int curLast = grid[m-1][0];
        for (int i = m - 1; i >= 1; --i) {
            grid[i][0] = grid[i-1][0];
        }

        grid[0][0] = curLast;
    }
};

#endif//LCFULL_LC1260_H
