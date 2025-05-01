//
// Created by garen-lee on 2025/5/1.
/**
  ******************************************************************************
  * @file           : L202_isHappy.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/1
  ******************************************************************************
  */
//

#ifndef DUALPOINTER_L202_ISHAPPY_H
#define DUALPOINTER_L202_ISHAPPY_H

#include "util.h"
class L202_isHappy : public LeetcodeDualPointer {
private:
    bool isHappy(int n);
    int getNext(int n);
public:
    L202_isHappy() {}
    void test();
};


#endif //DUALPOINTER_L202_ISHAPPY_H
