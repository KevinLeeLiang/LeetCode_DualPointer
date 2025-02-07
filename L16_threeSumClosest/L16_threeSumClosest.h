//
// Created by garen_lee on 2025/2/7.
/**
  ******************************************************************************
  * @file           : L16_threeSumClosest.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/7
  ******************************************************************************
  */
//

#ifndef DUALPOINTER_L16_THREESUMCLOSEST_H
#define DUALPOINTER_L16_THREESUMCLOSEST_H

#include "util.h"
class L16_threeSumClosest : public LeetcodeDualPointer{
private:
    int threeSumClosest(vector<int>& nums, int target);
public:
    L16_threeSumClosest(){}
    void test();
};


#endif //DUALPOINTER_L16_THREESUMCLOSEST_H
