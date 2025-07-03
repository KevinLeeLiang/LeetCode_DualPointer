//
// Created by garen_lee on 2025/7/3.
/**
  ******************************************************************************
  * @file           : L524_findLongestWord.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/3
  ******************************************************************************
  */
//

#ifndef L160_GETINTERSECTIONNODE_CPP_L524_FINDLONGESTWORD_H
#define L160_GETINTERSECTIONNODE_CPP_L524_FINDLONGESTWORD_H

#include "util.h"
class L524_findLongestWord : public LeetcodeDualPointer {
private:
    string findLongestWord(string s, vector<string>& dictionary);
public:
    L524_findLongestWord() {}
    void test();
};


#endif //L160_GETINTERSECTIONNODE_CPP_L524_FINDLONGESTWORD_H
