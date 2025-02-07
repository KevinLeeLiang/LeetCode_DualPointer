//
// Created by garen_lee on 2025/2/7.
/**
  ******************************************************************************
  * @file           : L16_threeSumClosest.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/7
  ******************************************************************************
  */
//

#include "L16_threeSumClosest.h"

int L16_threeSumClosest::threeSumClosest(vector<int> &nums, int target) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int ans = nums[0] + nums[1] + nums[2];
    for (int i = 0; i < n; ++i) {
        int j = i + 1, k = n - 1;
        while (j < k) {
            int sum = nums[i] + nums[j] + nums[k];
            if (abs(sum - target) < abs(ans - target)) {
                ans = sum;
            } if (sum > target) {
                --k;
            } else {
                ++j;
            }
        }
    }
    return ans;
}

void L16_threeSumClosest::test() {
    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;
    int res = threeSumClosest(nums, target);
    cout << "res:" << res << endl;
    nums = {0, 0, 0};
    target = 1;
    res = threeSumClosest(nums, target);
    cout << "res:" << res << endl;
}