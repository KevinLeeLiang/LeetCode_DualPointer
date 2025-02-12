//
// Created by garen_lee on 2025/2/12.
/**
  ******************************************************************************
  * @file           : L18_fourSum.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/12
  ******************************************************************************
  */
//

#ifndef DUALPOINTER_L18_FOURSUM_H
#define DUALPOINTER_L18_FOURSUM_H

#include "util.h"
class L18_fourSum : public LeetcodeDualPointer{
private:
    vector<vector<int>> fourSum(vector<int>& nums, int target);
public:
    L18_fourSum(){}
    void test();
};


#endif //DUALPOINTER_L18_FOURSUM_H
