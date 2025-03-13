//
// Created by garen_lee on 2025/3/13.
/**
  ******************************************************************************
  * @file           : L80_removeDuplicates.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/13
  ******************************************************************************
  */
//

#include "L80_removeDuplicates.h"

int L80_removeDuplicates::removeDuplicates(vector<int> &nums) {
    int p0 = 0, p1 = 0;
    if (nums.size() < 2) return nums.size();
    while (p1 < nums.size()) {
        if (nums[p0] == nums[p1]) {
            if (p1 - p0 < 2) {
                p1++;
            } else {
                nums.erase(nums.begin() + p1);
            }
        } else {
            p0++;
            p1++;
        }
    }
    return nums.size();
}

void L80_removeDuplicates::test() {
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    cout << removeDuplicates(nums) << endl;
    print_vector(nums);
    nums = {0, 0, 1, 1, 1, 1, 2, 3, 3};
    cout << removeDuplicates(nums) << endl;
    print_vector(nums);
}