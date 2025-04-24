//
// Created by garen_lee on 2025/4/24.
/**
  ******************************************************************************
  * @file           : L167_twoSum.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/24
  ******************************************************************************
  */
//

#include "L167_twoSum.h"

vector<int> L167_twoSum::twoSum(vector<int> &nums, int target) {
    int left = 0, right = nums.size() - 1;
    while (left < right) {
        if (nums[left] + nums[right] == target) {
            return {left + 1, right + 1};
        } else if (nums[left] + nums[right] < target) {
            left++;
        } else {
            right--;
        }
    }
    return {-1, -1};
}

void L167_twoSum::test() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    print_vector(result);
    nums = {2, 3, 4};
    target = 6;
    result = twoSum(nums, target);
    print_vector(result);
    nums = {-1, 0};
    target = -1;
    result = twoSum(nums, target);
    print_vector(result);
}