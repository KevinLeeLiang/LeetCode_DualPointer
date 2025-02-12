//
// Created by garen_lee on 2025/2/12.
/**
  ******************************************************************************
  * @file           : L19_removeNthFromEnd.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/12
  ******************************************************************************
  */
//

#ifndef DUALPOINTER_L19_REMOVENTHFROMEND_H
#define DUALPOINTER_L19_REMOVENTHFROMEND_H

#include "util.h"
class L19_removeNthFromEnd : public LeetcodeDualPointer{
private:
    ListNode *removeNthFromEnd(ListNode *head, int n);
public :
    L19_removeNthFromEnd(){}
    void test();
};


#endif //DUALPOINTER_L19_REMOVENTHFROMEND_H
