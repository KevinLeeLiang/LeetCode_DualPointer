//
// Created by garen_lee on 2025/4/24.
/**
  ******************************************************************************
  * @file           : L167_twoSum.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/24
  ******************************************************************************
  */
//

#ifndef L160_GETINTERSECTIONNODE_CPP_L167_TWOSUM_H
#define L160_GETINTERSECTIONNODE_CPP_L167_TWOSUM_H

#include "util.h"
class L167_twoSum : public LeetcodeDualPointer {
private:
    vector<int> twoSum(vector<int> &nums, int target);
public:
    L167_twoSum() {}
    void test();
};


#endif //L160_GETINTERSECTIONNODE_CPP_L167_TWOSUM_H
