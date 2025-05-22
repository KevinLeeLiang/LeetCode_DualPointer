//
// Created by garen_lee on 2025/5/22.
/**
  ******************************************************************************
  * @file           : L321_maxNumber.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/22
  ******************************************************************************
  */
//

#ifndef L160_GETINTERSECTIONNODE_CPP_L321_MAXNUMBER_H
#define L160_GETINTERSECTIONNODE_CPP_L321_MAXNUMBER_H

#include "util.h"
class L321_maxNumber : public LeetcodeDualPointer {
private:
    vector<int> maxNumber(vector<int>& nums1, vector<int>& nums2, int k);
    int compare(vector<int>& subsequence1, int index1, vector<int>& subsequence2, int index2);
    vector<int> merge(vector<int>& subsequence1, vector<int>& subsequence2);
    vector<int> MaxSubsequence(vector<int>& nums, int k);
public:
    L321_maxNumber() {}
    void test();
};


#endif //L160_GETINTERSECTIONNODE_CPP_L321_MAXNUMBER_H
