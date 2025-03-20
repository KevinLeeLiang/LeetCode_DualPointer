//
// Created by garen_lee on 2025/3/20.
/**
  ******************************************************************************
  * @file           : L86_partition.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/20
  ******************************************************************************
  */
//

#ifndef DUALPOINTER_L86_PARTITION_H
#define DUALPOINTER_L86_PARTITION_H

#include "util.h"
class L86_partition : public LeetcodeDualPointer {
private:
    ListNode *partition(ListNode *head, int x);
public:
    L86_partition() {}
    void test();
};


#endif //DUALPOINTER_L86_PARTITION_H
