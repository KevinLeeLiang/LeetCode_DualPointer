//
// Created by garen_lee on 2025/2/20.
/**
  ******************************************************************************
  * @file           : L27_removeElement.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/20
  ******************************************************************************
  */
//

#include "L27_removeElement.h"

int L27_removeElement::removeElement(vector<int> &nums, int val) {
    int n = nums.size();
    int left = 0;
    for (int right = 0; right < n; right++) {
        if (nums[right] != val) {
            nums[left] = nums[right];
            left++;
        }
    }
    return left;
}

void L27_removeElement::test() {
    vector<int>nums = {3,2,1,3};
    int val = 3;
    cout << removeElement(nums, val) << endl;
    nums = {0,1,2,2,3,0,4,2};
    val = 2;
    cout << removeElement(nums, val) << endl;
}