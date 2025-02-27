//
// Created by garen_lee on 2025/2/27.
/**
  ******************************************************************************
  * @file           : L31_nextPermutation.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/27
  ******************************************************************************
  */
//

#ifndef DUALPOINTER_L31_NEXTPERMUTATION_H
#define DUALPOINTER_L31_NEXTPERMUTATION_H

#include "util.h"
class L31_nextPermutation : public LeetcodeDualPointer{
private:
    void nextPermutation(vector<int>& nums);
public:
    L31_nextPermutation() {}
    void test();
};


#endif //DUALPOINTER_L31_NEXTPERMUTATION_H
