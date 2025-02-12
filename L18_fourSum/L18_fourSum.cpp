//
// Created by garen_lee on 2025/2/12.
/**
  ******************************************************************************
  * @file           : L18_fourSum.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/12
  ******************************************************************************
  */
//

#include "L18_fourSum.h"

vector<vector<int>> L18_fourSum::fourSum(vector<int> &nums, int target) {
    vector<vector<int>> quadruplets;
    if (nums.size() < 4) {
        return quadruplets;
    }
    sort(nums.begin(), nums.end());
    int length = nums.size();
    for (int i = 0; i < length - 3; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }
        for (int j = i + 1; j < length - 2; j++) {
            if (j > i + 1 && nums[j] == nums[j - 1]) {
                continue;
            }
            for (int left = j + 1, right = length - 1; left < right;) {
                long long  sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[left] + (long long)nums[right];
                if (sum == target) {
                    quadruplets.push_back({nums[i], nums[j], nums[left], nums[right]});
                    left++;
                    while (left < right && nums[left] == nums[left - 1]) {
                        left++;
                    }
                } else if (sum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }
    }
    return quadruplets;
}
void L18_fourSum::test() {
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    vector<vector<int>> res = fourSum(nums, target);
//    print_vector_vector(res);
//    nums = {2, 2, 2, 2, 2};
//    target = 8;
//    res = fourSum(nums, target);
//    print_vector_vector(res);
    nums = {1000000000,1000000000,1000000000,1000000000};
    target = 0;
    res = fourSum(nums, target);
    print_vector_vector(res);
}