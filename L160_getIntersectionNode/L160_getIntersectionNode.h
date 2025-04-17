//
// Created by garen_lee on 2025/4/17.
/**
  ******************************************************************************
  * @file           : L160_getIntersectionNode.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/17
  ******************************************************************************
  */
//

#ifndef DUALPOINTER_L160_GETINTERSECTIONNODE_H
#define DUALPOINTER_L160_GETINTERSECTIONNODE_H

#include "util.h"
class L160_getIntersectionNode : public LeetcodeDualPointer {
private:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB);
    ListNode *createIntersectionListNode(vector<int> &nums, ListNode* headA, int skipA, int skipB);
public:
    L160_getIntersectionNode() {}
    void test();
};
#endif //DUALPOINTER_L160_GETINTERSECTIONNODE_H
