//
// Created by garen_lee on 2025/3/27.
/**
  ******************************************************************************
  * @file           : L88_merge.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/27
  ******************************************************************************
  */
//

#include "L88_merge.h"

void L88_merge::merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    int p1 = 0, p2 = 0;
    int sorted[m + n];
    int cur;
    while (p1 < m || p2 < n) {
        if (p1 == m) {
            cur = nums2[p2++];
        } else if (p2 == n) {
            cur = nums1[p1++];
        } else if (nums1[p1] < nums2[p2]) {
            cur = nums1[p1++];
        } else {
            cur = nums2[p2++];
        }
        sorted[p1 + p2 - 1] = cur;
    }
    for (int i = 0; i < m + n; i++) {
        nums1[i] = sorted[i];
    }
}

void L88_merge::test() {
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int m = 3;
    int n = 3;
    merge(nums1, m, nums2, n);
    print_vector(nums1);
    nums1 = {1};
    nums2 = {};
    m = 1;
    n = 0;
    merge(nums1, m, nums2, n);
    print_vector(nums1);
    nums1 = {0};
    nums2 = {1};
    m = 0;
    n = 1;
    merge(nums1, m, nums2, n);
    print_vector(nums1);
    nums1 = {4,0,0,0,0,0};
    nums2 = {1,2,3,5,6};
    m = 1;
    n = 5;
    merge(nums1, m, nums2, n);
    print_vector(nums1);
}