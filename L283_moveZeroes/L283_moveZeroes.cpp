//
// Created by garen_lee on 2025/5/8.
/**
  ******************************************************************************
  * @file           : L283_moveZeroes.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/8
  ******************************************************************************
  */
//

#include "L283_moveZeroes.h"

void L283_moveZeroes::moveZeroes(vector<int> &nums) {
    int n =  nums.size(), left = 0, right = 0;
    while (right < n) {
        if (nums[right] != 0) {
            swap(nums[left], nums[right]);
            left++;
        }
        right++;
    }
}

void L283_moveZeroes::test() {
    vector<int> nums = {0, 1, 0, 3, 12};
    moveZeroes(nums);
    print_vector(nums);
    nums = {0};
    moveZeroes(nums);
    print_vector(nums);
    nums = {1,2,0,4,0,14};
    moveZeroes(nums);
    print_vector(nums);
}