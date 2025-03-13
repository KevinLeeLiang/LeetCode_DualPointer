//
// Created by garen_lee on 2025/3/13.
/**
  ******************************************************************************
  * @file           : L75_sortColors.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/13
  ******************************************************************************
  */
//

#include "L75_sortColors.h"

void L75_sortColors::sortColors(vector<int> &nums) {
    int n = nums.size();
    int p0 = 0, p1 = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == 1) {
            swap(nums[i], nums[p1]);
            p1++;
        } else if (nums[i] == 0) {
            swap(nums[i], nums[p0]);
            if (p0 < p1) {
                swap(nums[i], nums[p1]);
            }
            p0++;
            p1++;
        }
    }
}

void L75_sortColors::test() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    sortColors(nums);
    print_vector(nums);
    nums = {2, 0, 1};
    sortColors(nums);
    print_vector(nums);
}