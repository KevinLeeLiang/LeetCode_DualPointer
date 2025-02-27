//
// Created by garen_lee on 2025/2/27.
/**
  ******************************************************************************
  * @file           : L28_strStr.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/27
  ******************************************************************************
  */
//

#include "L28_strStr.h"

int L28_strStr::strStr(string haystack, string needle) {
    int n = haystack.size(), m = needle.size();
    if (m == 0) {
        return 0;
    }
    vector<int> pi(m);
    for (int i = 1, j = 0; i < m; i++) {
        while (j > 0 && needle[i] != needle[j]) {
            j = pi[j - 1];
        }
        if (needle[i] == needle[j]) {
            j++;
        }
        pi[i] = j;
    }
    for (int i = 0, j = 0; i < n; i++) {
        while (j > 0 && haystack[i] != needle[j]) {
            j = pi[j - 1];
        }
        if (haystack[i] == needle[j]) {
            j++;
        }
        if (j == m) {
            return i - m + 1;
        }
    }
    return -1;
}

void L28_strStr::test() {
    string haystack = "sadbutsad";
    string needle = "sad";
    cout << strStr(haystack, needle) << endl;
    haystack = "leetcode";
    needle = "leeto";
    cout << strStr(haystack, needle) << endl;
    haystack = "mississippi";
    needle = "issip";
    cout << strStr(haystack, needle) << endl;
}