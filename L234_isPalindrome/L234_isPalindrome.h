//
// Created by garen_lee on 2025/5/8.
/**
  ******************************************************************************
  * @file           : L234_isPalindrome.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/8
  ******************************************************************************
  */
//

#ifndef L160_GETINTERSECTIONNODE_CPP_L234_ISPALINDROME_H
#define L160_GETINTERSECTIONNODE_CPP_L234_ISPALINDROME_H

#include "util.h"
class L234_isPalindrome : public LeetcodeDualPointer {
private:
    bool isPalindrome(ListNode* head);
    bool recursivelyCheck(ListNode* currentNode);
    ListNode* frontPointer;
public:
    L234_isPalindrome() {}
    void test();
};


#endif //L160_GETINTERSECTIONNODE_CPP_L234_ISPALINDROME_H
