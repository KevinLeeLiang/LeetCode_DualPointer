//
// Created by garen_lee on 2025/7/3.
/**
  ******************************************************************************
  * @file           : L532_findPairs.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/3
  ******************************************************************************
  */
//

#include "L532_findPairs.h"

int L532_findPairs::findPairs(vector<int> &nums, int k) {
    sort(nums.begin(), nums.end());
    int n = nums.size(), y = 0, res = 0;
    for (int x = 0; x < n; x++) {
        if (x == 0 || nums[x] != nums[x - 1]) {
            while (y < n && (nums[y] < nums[x] + k || y <= x)) {
                y++;
            }
            if (y < n && nums[y] == nums[x] + k) {
                res++;
            }
        }
    }
    return res;
}

void L532_findPairs::test() {
    vector<int> nums = {1, 3, 1, 5, 4};
    cout << findPairs(nums, 2) << endl;
    nums = {1, 2, 3, 4, 5};
    cout << findPairs(nums, 1) << endl;
    nums = {1, 3, 1, 5, 4};
    cout << findPairs(nums, 0) << endl;
}