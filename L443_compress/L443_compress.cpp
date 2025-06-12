//
// Created by garen_lee on 2025/6/12.
/**
  ******************************************************************************
  * @file           : L443_compress.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/12
  ******************************************************************************
  */
//

#include "L443_compress.h"

int L443_compress::compress(vector<char>& chars) {
    if (chars.size() == 0)
        return 0;
//    if (chars.size() == 1)
//      return 1;
    char tmp = chars[0];
    string ans;
    int count = 1;
    for (int i = 1; i < chars.size(); i++) {
        if (chars[i] == tmp) {
            count++;
            if (i == chars.size() - 1) {
                ans += tmp;
                if (count > 1)
                    ans += to_string(count);
                count = 0;
            }
        } else {
            ans += tmp;
            if (count > 1)
                ans += to_string(count);
            count = 1;
            tmp = chars[i];
        }
    }
    if (count != 0) {
        ans += tmp;
        if (count > 1)
            ans += to_string(count);
    }
    chars.assign(ans.begin(), ans.end());
    return ans.size();
}

void L443_compress::test() {
    vector<char>chars = {'a','a','b','b','c','c','c'};
    cout << compress(chars) << endl;
    chars = {'a'};
    cout << compress(chars) << endl;
    chars = {'a','b','b','b','b','b','b','b','b','b','b','b','b'};
    cout << compress(chars) << endl;
}