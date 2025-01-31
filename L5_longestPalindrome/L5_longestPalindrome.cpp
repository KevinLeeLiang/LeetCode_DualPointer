//
// Created by garen-lee on 2025/1/30.
/**
  ******************************************************************************
  * @file           : L5_longestPalindrome.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/1/30
  ******************************************************************************
  */
//

#include "L5_longestPalindrome.h"
void L5_longestPalindrome::test(){
    string s;
    s = "babad";
    cout << longestPalindrome(s) << endl;
    s = "cbbd";
    cout << longestPalindrome(s) << endl;
}

pair<int, int> L5_longestPalindrome::expandAroundCenter(const string& s, int left, int right) {
    while (left >= 0 && right < s.size() && s[left] == s[right]) {
        left--;
        right++;
    }
    return make_pair(left + 1, right - 1);;
}

string L5_longestPalindrome::longestPalindrome(string s) {
    int start = 0, end = 0;
    for (int i = 0; i < s.size(); ++i) {
        auto [left1, right1] = expandAroundCenter(s, i, i);
        auto [left2, right2] = expandAroundCenter(s, i, i + 1);
        if (right1 - left1 > end - start) {
            start = left1;
            end = right1;
        }
        if (right2 - left2 > end - start) {
            start = left2;
            end = right2;
        }
    }

    return s.substr(start, end - start + 1);
}