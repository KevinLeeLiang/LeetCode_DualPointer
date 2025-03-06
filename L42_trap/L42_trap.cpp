//
// Created by garen_lee on 2025/3/6.
/**
  ******************************************************************************
  * @file           : L42_trap.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/6
  ******************************************************************************
  */
//

#include "L42_trap.h"

int L42_trap::trap(vector<int> &height) {
    vector<int> leftMax(height.size(), 0);
    vector<int> rightMax(height.size(), 0);
    for (int i = 0; i < height.size(); i++) {
        if (i == 0) {
            leftMax[i] = height[i];
        } else {
            leftMax[i] = max(leftMax[i - 1], height[i]);
        }
    }
    for (int i = height.size() - 1; i >= 0; i--) {
        if (i == height.size() - 1) {
            rightMax[i] = height[i];
        } else {
            rightMax[i] = max(rightMax[i + 1], height[i]);
        }
    }
    int ans = 0;
    for (int i = 0; i < height.size(); i++) {
        ans += min(leftMax[i], rightMax[i]) - height[i];
    }
    return ans;
}

void L42_trap::test() {
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << trap(height) << endl;
    height = {4, 2, 0, 3, 2, 5};
    cout << trap(height) << endl;
}