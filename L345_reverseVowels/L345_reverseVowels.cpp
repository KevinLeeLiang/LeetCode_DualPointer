//
// Created by garen_lee on 2025/5/29.
/**
  ******************************************************************************
  * @file           : L345_reverseVowels.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/29
  ******************************************************************************
  */
//

#include "L345_reverseVowels.h"

string L345_reverseVowels::reverseVowels(string s) {
    int slow, fast;
    slow = 0;
    fast = s.size() - 1;
    while (slow < fast) {
        if (!isVowel(s[slow])) {
            slow++;
            continue;
        }
        if (!isVowel(s[fast])) {
            fast--;
            continue;
        }
        char temp = s[slow];
        s[slow] = s[fast];
        s[fast] = temp;
        slow++;
        fast--;
    }
    return s;
}

void L345_reverseVowels::test() {
    string s = "IceCreAm";
    cout << reverseVowels(s) << endl;
    s = "leetcode";
    cout << reverseVowels(s) << endl;
}