//
// Created by garen_lee on 2025/4/24.
/**
  ******************************************************************************
  * @file           : L165_compareVersion.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/24
  ******************************************************************************
  */
//

#include "L165_compareVersion.h"

int L165_compareVersion::compareVersion(string version1, string version2) {
    int n = version1.size(), m = version2.size();
    int i = 0, j = 0;
    while (i < n || j < m) {
        int x = 0, y = 0;
        for (; i < n && version1[i] != '.'; ++i) {
            x = x * 10 + version1[i] - '0';
        }
        ++i;
        for (; j < m && version2[j] != '.'; ++j) {
            y = y * 10 + version2[j] - '0';
        }
        ++j;
        if (x > y) {
            return 1;
        } else if (x < y) {
            return -1;
        }
    }
    return 0;
}

void L165_compareVersion::test() {
    string version1 = "1.2";
    string version2 = "1.10";
    cout << compareVersion(version1, version2) << endl;
    version1 = "1.01";
    version2 = "1.001";
    cout << compareVersion(version1, version2) << endl;
    version1 = "1.0";
    version2 = "1.0.0";
    cout << compareVersion(version1, version2) << endl;
}