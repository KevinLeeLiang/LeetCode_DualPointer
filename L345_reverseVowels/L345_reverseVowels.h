//
// Created by garen_lee on 2025/5/29.
/**
  ******************************************************************************
  * @file           : L345_reverseVowels.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/29
  ******************************************************************************
  */
//

#ifndef L160_GETINTERSECTIONNODE_CPP_L345_REVERSEVOWELS_H
#define L160_GETINTERSECTIONNODE_CPP_L345_REVERSEVOWELS_H

#include "util.h"
class L345_reverseVowels : public LeetcodeDualPointer {
private:
    const unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    bool isVowel(char c) {
        return vowels.count(c) != 0;
    }

    string reverseVowels(string s);
public:
    L345_reverseVowels() {}
    void test();
};


#endif //L160_GETINTERSECTIONNODE_CPP_L345_REVERSEVOWELS_H
