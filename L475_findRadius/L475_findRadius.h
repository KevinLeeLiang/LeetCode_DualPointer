//
// Created by garen_lee on 2025/6/19.
/**
  ******************************************************************************
  * @file           : L475_findRadius.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/19
  ******************************************************************************
  */
//

#ifndef L160_GETINTERSECTIONNODE_CPP_L475_FINDRADIUS_H
#define L160_GETINTERSECTIONNODE_CPP_L475_FINDRADIUS_H

#include "util.h"
class L475_findRadius : public LeetcodeDualPointer {
private:
    int findRadius(vector<int> &houses, vector<int> &heaters);
public:
    L475_findRadius() {}
    void test();
};


#endif //L160_GETINTERSECTIONNODE_CPP_L475_FINDRADIUS_H
