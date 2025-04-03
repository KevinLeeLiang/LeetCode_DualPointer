//
// Created by garen_lee on 2025/4/3.
/**
  ******************************************************************************
  * @file           : L141_hasCycle.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/3
  ******************************************************************************
  */
//

#ifndef DUALPOINTER_L141_HASCYCLE_H
#define DUALPOINTER_L141_HASCYCLE_H

#include "util.h"
class L141_hasCycle : public LeetcodeDualPointer {
private:
    bool hasCycle(ListNode *head);
public:
    L141_hasCycle() {}
    void test();
};


#endif //DUALPOINTER_L141_HASCYCLE_H
