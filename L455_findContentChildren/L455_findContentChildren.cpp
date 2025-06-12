//
// Created by garen_lee on 2025/6/12.
/**
  ******************************************************************************
  * @file           : L455_findContentChildren.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/12
  ******************************************************************************
  */
//

#include "L455_findContentChildren.h"

int L455_findContentChildren::findContentChildren(vector<int> &g, vector<int> &s) {
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    int i = 0, j = 0;
    while (i < g.size() && j < s.size()) {
        if (g[i] <= s[j]) {
            i++;
            j++;
        } else {
            j++;
        }
    }
    return i;
}

void L455_findContentChildren::test() {
    vector<int> g = {1, 2, 3};
    vector<int> s = {1, 1};
    cout << findContentChildren(g, s) << endl;
    g = {1, 2};
    s = {1, 2, 3};
    cout << findContentChildren(g, s) << endl;
    g = {10, 9, 8, 7};
    s = {5,6,7,8};
    cout << findContentChildren(g, s) << endl;
}