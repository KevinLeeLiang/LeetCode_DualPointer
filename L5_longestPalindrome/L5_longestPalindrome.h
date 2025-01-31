//
// Created by garen-lee on 2025/1/30.
/**
  ******************************************************************************
  * @file           : L5_longestPalindrome.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/1/30
  ******************************************************************************
  */
//

#ifndef DUALPOINTER_L5_LONGESTPALINDROME_H
#define DUALPOINTER_L5_LONGESTPALINDROME_H

#include "util.h"
class L5_longestPalindrome : public LeetcodeDualPointer{
private:
    string longestPalindrome(string s);
    pair<int, int> expandAroundCenter(const string& s, int left, int right);
public:
    L5_longestPalindrome(){}
    void test();
};


#endif //DUALPOINTER_L5_LONGESTPALINDROME_H
