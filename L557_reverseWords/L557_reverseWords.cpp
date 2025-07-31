//
// Created by garen_lee on 2025/7/31.
/**
  ******************************************************************************
  * @file           : L557_reverseWords.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/31
  ******************************************************************************
  */
//

#include "L557_reverseWords.h"

string L557_reverseWords::reverseWords(string s) {
    string ret;
    int length = s.size();
    int i = 0;
    while (i < length) {
        int start = i;
        while (i < length && s[i] != ' ') {
            i++;
        }
        for (int j = start; j < i; j++) {
            ret.push_back(s[start + i - 1 - j]);
        }
        while (i < length && s[i] == ' ') {
            i++;
            ret.push_back(' ');
        }
    }
    return ret;
}

void L557_reverseWords::test() {
    string s = "Let's take LeetCode contest";
    cout << reverseWords(s) << endl;
    s = "Mr Ding";
    cout << reverseWords(s) << endl;
}