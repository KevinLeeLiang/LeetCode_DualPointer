//
// Created by garen_lee on 2025/4/17.
/**
  ******************************************************************************
  * @file           : L151_reverseWords.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/17
  ******************************************************************************
  */
//

#include "L151_reverseWords.h"

string L151_reverseWords::reverseWords(string s) {
    reverse(s.begin(), s.end());
    int idx = 0;
    int n = s.size();
    for (int start = 0; start < n; start++) {
        if (s[start] == ' ') continue;
        if (idx != 0) s[idx++] = ' ';
        int end = start;
        while (end < n && s[end] != ' ') s[idx++] = s[end ++];
        reverse(s.begin() + idx - (end - start), s.begin() + idx);
        start = end;
    }
    s.erase(s.begin() + idx, s.end());
    return s;
}

void L151_reverseWords::test() {
    string s = "the sky is blue";
    cout << reverseWords(s) << endl;
    s = "  hello world  ";
    cout << reverseWords(s) << endl;
    s = "a good   example";
    cout << reverseWords(s) << endl;
}