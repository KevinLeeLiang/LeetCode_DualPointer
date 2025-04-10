//
// Created by garen_lee on 2025/4/10.
/**
  ******************************************************************************
  * @file           : L143_recoderList.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/10
  ******************************************************************************
  */
//

#ifndef DUALPOINTER_L143_RECODERLIST_H
#define DUALPOINTER_L143_RECODERLIST_H

#include "util.h"
class L143_recoderList : public LeetcodeDualPointer {
private:
    void reorderList(ListNode *head);
    ListNode* reverseList(ListNode* head);
    ListNode *middleNode(ListNode *head);
    void merge(ListNode *head1, ListNode *head2);
public:
    L143_recoderList() {}
    void test();
};


#endif //DUALPOINTER_L143_RECODERLIST_H
