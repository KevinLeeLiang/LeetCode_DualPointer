//
// Created by garen_lee on 2025/2/20.
/**
  ******************************************************************************
  * @file           : L27_removeElement.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/20
  ******************************************************************************
  */
//

#ifndef DUALPOINTER_L27_REMOVEELEMENT_H
#define DUALPOINTER_L27_REMOVEELEMENT_H

#include "util.h"
class L27_removeElement : public LeetcodeDualPointer{
private:
    int removeElement(vector<int>& nums, int val);
public:
    L27_removeElement() {}
    void test();
};


#endif //DUALPOINTER_L27_REMOVEELEMENT_H
