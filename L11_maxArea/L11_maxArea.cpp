//
// Created by garen-lee on 2025/1/30.
/**
  ******************************************************************************
  * @file           : L11_maxArea.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/1/30
  ******************************************************************************
  */
//

#include "L11_maxArea.h"

int L11_maxArea::maxArea(vector<int> &height) {
    int l = 0, r = height.size() - 1;
    int max_area = 0;
    while (l < r) {
        int area = min(height[l], height[r]) * (r - l);
        max_area = max(max_area, area);
        if (height[l] < height[r]) {
            l++;
        } else {
            r--;
        }
    }
    return max_area;
}

void L11_maxArea::test() {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int res = maxArea(height);
    cout << res << endl;
    height = {1, 1};
    res = maxArea(height);
    cout << res << endl;
}