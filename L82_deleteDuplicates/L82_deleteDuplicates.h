//
// Created by garen_lee on 2025/3/20.
/**
  ******************************************************************************
  * @file           : L82_deleteDuplicates.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/20
  ******************************************************************************
  */
//

#ifndef DUALPOINTER_L82_DELETEDUPLICATES_H
#define DUALPOINTER_L82_DELETEDUPLICATES_H

#include "util.h"
class L82_deleteDuplicates : public LeetcodeDualPointer {
private:
    ListNode* deleteDuplicates(ListNode* head);
public:
    L82_deleteDuplicates() {}
    void test();
};


#endif //DUALPOINTER_L82_DELETEDUPLICATES_H
