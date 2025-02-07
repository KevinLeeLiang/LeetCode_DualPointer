//
// Created by garen_lee on 2025/2/7.
/**
  ******************************************************************************
  * @file           : L15_threeSum.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/7
  ******************************************************************************
  */
//

#ifndef DUALPOINTER_L15_THREESUM_H
#define DUALPOINTER_L15_THREESUM_H

#include "util.h"
class L15_threeSum : public LeetcodeDualPointer{
private:
    vector<vector<int>> threeSum(vector<int>& nums);
public:
    L15_threeSum(){}
    void test();
};


#endif //DUALPOINTER_L15_THREESUM_H
