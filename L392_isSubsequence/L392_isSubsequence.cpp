//
// Created by garen_lee on 2025/6/5.
/**
  ******************************************************************************
  * @file           : L392_isSubsequence.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/5
  ******************************************************************************
  */
//

#include "L392_isSubsequence.h"

bool L392_isSubsequence::isSubsequence(string s, string t) {
    int ps = 0, pt = 0;
    while (pt < t.size()) {
        if (s[ps] == t[pt]) {
            ps++;
            if (ps == s.size()) {
                return true;
            }
        }
        pt++;
    }
    return ps == s.size() ? true : false;
}

void L392_isSubsequence::test() {
    string s = "abc";
    string t = "ahbgdc";
    cout << isSubsequence(s, t) << endl;
    s = "axc";
    t = "ahbgdc";
    cout << isSubsequence(s, t) << endl;
}