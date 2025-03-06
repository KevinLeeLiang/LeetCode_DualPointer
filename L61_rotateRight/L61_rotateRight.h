//
// Created by garen_lee on 2025/3/6.
/**
  ******************************************************************************
  * @file           : L61_rotateRight.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/6
  ******************************************************************************
  */
//

#ifndef DUALPOINTER_L61_ROTATERIGHT_H
#define DUALPOINTER_L61_ROTATERIGHT_H

#include "util.h"
class L61_rotateRight : public LeetcodeDualPointer {
private:
    ListNode* rotateRight(ListNode* head, int k);
public:
    L61_rotateRight() {}
    void test();
};


#endif //DUALPOINTER_L61_ROTATERIGHT_H
