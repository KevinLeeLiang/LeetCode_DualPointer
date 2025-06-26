//
// Created by garen_lee on 2025/6/26.
/**
  ******************************************************************************
  * @file           : L522_findLUSlength.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/26
  ******************************************************************************
  */
//

#include "L522_findLUSlength.h"

int L522_findLUSlength::findLUSlength(vector<string> &strs) {
    auto is_subseq = [](const string& s, const string& t) ->bool {
        int pt_s = 0, pt_t = 0;
        while (pt_s < s.size() && pt_t < t.size()) {
            if (s[pt_s]==t[pt_t]) {
                ++pt_s;
            }
            ++pt_t;
        }
        return pt_s == s.size();
    };
    int n = strs.size();
    int ans = -1;
    for (int i = 0; i < n; ++i) {
        bool check = true;
        for (int j = 0; j < n; ++j) {
            if (i != j && is_subseq(strs[i], strs[j])) {
                check = false;
                break;
            }
        }
        if (check) {
            ans = max(ans, static_cast<int>(strs[i].size()));
        }
    }
    return ans;
}

void L522_findLUSlength::test() {
    vector<string> strs = {"aba", "cdc", "eae"};
    cout << findLUSlength(strs) << endl;
    strs = {"aaa", "aaa", "aa"};
    cout << findLUSlength(strs) << endl;
}