//
// Created by garen_lee on 2025/6/5.
/**
  ******************************************************************************
  * @file           : L350_intersect.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/5
  ******************************************************************************
  */
//

#include "L350_intersect.h"

vector<int> L350_intersect::intersect(vector<int> &nums1, vector<int> &nums2) {
    vector<int> res;
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    set_intersection(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), back_inserter(res));
    return res;
}


void L350_intersect::test() {
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    vector<int> res = intersect(nums1, nums2);
    print_vector(res);
    nums1 = {4, 9, 5};
    nums2 = {9, 4, 9, 8, 4};
    res = intersect(nums1, nums2);
    print_vector(res);
}