//
// Created by garen_lee on 2025/7/10.
/**
  ******************************************************************************
  * @file           : L541_reverseStr.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/10
  ******************************************************************************
  */
//

#include "L541_reverseStr.h"

string L541_reverseStr::reverseStr(string s, int k) {
    int n = s.size();
    int left = 0;
    while (left < n) {
        int right = min(left + k - 1, n - 1);
        reverse(s.begin() + left, s.begin() + right + 1);
        left = left + 2 * k;
    }
    return s;
}

void L541_reverseStr::test() {
    string s = "abcdefg";
    cout << reverseStr(s, 2) << endl;
    s = "abcd";
    cout << reverseStr(s, 2) << endl;
}