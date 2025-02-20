//
// Created by garen_lee on 2025/2/20.
/**
  ******************************************************************************
  * @file           : L26_removeDuplicates.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/20
  ******************************************************************************
  */
//

#include "L26_removeDuplicates.h"

int L26_removeDuplicates::removeDuplicates(vector<int> &nums) {
    int l = 0, r = 0;
    while (r < nums.size()) {
        if (nums[l] != nums[r]) {
            l++;
            nums[l] = nums[r];
        }
        r++;
    }
    return l + 1;
}
void L26_removeDuplicates::test() {
    vector<int> nums = {1, 1, 2};
    cout << removeDuplicates(nums) << endl;
    nums = {0,0,1,1,1,2,2,3,3,4};
    cout << removeDuplicates(nums) << endl;
}