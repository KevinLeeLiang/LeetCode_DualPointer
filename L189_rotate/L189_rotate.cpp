//
// Created by garen-lee on 2025/5/1.
/**
  ******************************************************************************
  * @file           : L189_rotate.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/1
  ******************************************************************************
  */
//

#include "L189_rotate.h"

void L189_rotate::rotate(vector<int>& nums, int k) {
    k %= nums.size();
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
    return;
}

void L189_rotate::test() {
    vector<int>nums = {1,2,3,4,5,6,7};
    int k = 3;
    rotate(nums, k);
    print_vector(nums);
    nums = {-1,-100,3,99}, k = 2;
    rotate(nums, k);
    print_vector(nums);
}