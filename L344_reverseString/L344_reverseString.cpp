//
// Created by garen_lee on 2025/5/22.
/**
  ******************************************************************************
  * @file           : L344_reverseString.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/22
  ******************************************************************************
  */
//

#include "L344_reverseString.h"

void L344_reverseString::reverseString(vector<char> &s) {
    int n = s.size();
    for (int i = 0; i < n / 2; i++) {
        char temp = s[i];
        s[i] = s[n - i - 1];
        s[n - i - 1] = temp;
    }
}

void L344_reverseString::test() {
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    reverseString(s);
    print_vector(s);
    s = {'H', 'a', 'n', 'n', 'a', 'h'};
    reverseString(s);
    print_vector(s);
}