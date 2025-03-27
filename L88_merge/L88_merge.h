//
// Created by garen_lee on 2025/3/27.
/**
  ******************************************************************************
  * @file           : L88_merge.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/27
  ******************************************************************************
  */
//

#ifndef DUALPOINTER_L88_MERGE_H
#define DUALPOINTER_L88_MERGE_H

#include "util.h"
class L88_merge : public LeetcodeDualPointer {
private:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n);
public:
    L88_merge() {}
    void test();
};


#endif //DUALPOINTER_L88_MERGE_H
