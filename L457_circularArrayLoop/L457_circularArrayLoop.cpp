//
// Created by garen_lee on 2025/6/19.
/**
  ******************************************************************************
  * @file           : L457_circularArrayLoop.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/19
  ******************************************************************************
  */
//

#include "L457_circularArrayLoop.h"

bool L457_circularArrayLoop::circularArrayLoop(vector<int> &nums) {
    int n = nums.size();
    auto next = [&](int cur) {
        return ((cur + nums[cur]) % n + n) % n;
    };
    for (int i = 0; i < n; ++i) {
        if (nums[i] == 0) continue;
        int slow = i, fast = next(i);
        while (nums[slow] * nums[fast] > 0 && nums[slow] * nums[next(fast)] > 0) {
            if (slow == fast) {
                if (slow == next(slow)) break;
                return true;
            }
            slow = next(slow);
            fast = next(next(fast));
        }
        int add = i;
        while (nums[add] * nums[next(add)] > 0) {
            int nextAdd = next(add);
            nums[add] = 0;
            add = nextAdd;
        }
    }
    return false;
}

void L457_circularArrayLoop::test() {
    vector<int> nums = {2, -1, 1, 2, 2};
    cout << circularArrayLoop(nums) << endl;
    nums = {-1, -2, -3, -4, -5, 6};
    cout << circularArrayLoop(nums) << endl;
    nums = {1, -1, 5, 1, 4};
    cout << circularArrayLoop(nums) << endl;
}