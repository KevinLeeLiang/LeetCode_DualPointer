//
// Created by garen_lee on 2025/7/17.
/**
  ******************************************************************************
  * @file           : L556_nextGreaterElement.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/17
  ******************************************************************************
  */
//

#include "L556_nextGreaterElement.h"

int L556_nextGreaterElement::nextGreaterElement(int n) {
    auto nums = to_string(n);
    int i = (int)nums.length() - 2;
    while (i >= 0 && nums[i] >= nums[ i + 1]) {
        i--;
    }
    if (i < 0) {
        return -1;
    }
    int j = (int)nums.length() - 1;
    while (j >= 0 && nums[i] >= nums[j]) {
        j --;
    }
    swap(nums[i], nums[j]);
    reverse(nums.begin() + i + 1, nums.end());
    long ans = stol(nums);
    return ans > INT_MAX ? -1 : ans;
}

void L556_nextGreaterElement::test() {
    int n = 12;
    cout << nextGreaterElement(n) << endl;
    n = 21;
    cout << nextGreaterElement(n) << endl;
}