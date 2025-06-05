//
// Created by garen_lee on 2025/6/5.
/**
  ******************************************************************************
  * @file           : L350_intersect.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/5
  ******************************************************************************
  */
//

#ifndef L160_GETINTERSECTIONNODE_CPP_L350_INTERSECT_H
#define L160_GETINTERSECTIONNODE_CPP_L350_INTERSECT_H

#include "util.h"
class L350_intersect : public LeetcodeDualPointer {
private:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2);
public:
    L350_intersect() {}
    void test();
};


#endif //L160_GETINTERSECTIONNODE_CPP_L350_INTERSECT_H
