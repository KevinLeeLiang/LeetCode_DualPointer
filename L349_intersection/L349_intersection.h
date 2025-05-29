//
// Created by garen_lee on 2025/5/29.
/**
  ******************************************************************************
  * @file           : L349_intersection.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/29
  ******************************************************************************
  */
//

#ifndef L160_GETINTERSECTIONNODE_CPP_L349_INTERSECTION_H
#define L160_GETINTERSECTIONNODE_CPP_L349_INTERSECTION_H

#include "util.h"
class L349_intersection : public LeetcodeDualPointer {
private:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2);
public:
    L349_intersection() {}
    void test();
};


#endif //L160_GETINTERSECTIONNODE_CPP_L349_INTERSECTION_H
