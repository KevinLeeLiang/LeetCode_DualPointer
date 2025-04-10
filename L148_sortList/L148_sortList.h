//
// Created by garen_lee on 2025/4/10.
/**
  ******************************************************************************
  * @file           : L148_sortList.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/10
  ******************************************************************************
  */
//

#ifndef DUALPOINTER_L148_SORTLIST_H
#define DUALPOINTER_L148_SORTLIST_H

#include "util.h"
class L148_sortList : public LeetcodeDualPointer {
private:
    ListNode* findMiddle(ListNode *head);
    ListNode* merge(ListNode *l1, ListNode *l2);
    ListNode *sortList(ListNode *head);
public:
    L148_sortList(){}
    void test();
};


#endif //DUALPOINTER_L148_SORTLIST_H
