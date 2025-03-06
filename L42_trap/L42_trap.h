//
// Created by garen_lee on 2025/3/6.
/**
  ******************************************************************************
  * @file           : L42_trap.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/6
  ******************************************************************************
  */
//

#ifndef DUALPOINTER_L42_TRAP_H
#define DUALPOINTER_L42_TRAP_H

#include "util.h"
class L42_trap : public LeetcodeDualPointer {
private:
    int trap(vector<int>& height);
public:
    L42_trap() {}
    void test();
};


#endif //DUALPOINTER_L42_TRAP_H
