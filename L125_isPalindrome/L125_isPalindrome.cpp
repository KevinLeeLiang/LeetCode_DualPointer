//
// Created by garen_lee on 2025/3/27.
/**
  ******************************************************************************
  * @file           : L125_isPalindrome.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/27
  ******************************************************************************
  */
//

#include "L125_isPalindrome.h"

bool L125_isPalindrome::isPalindrome(string s) {
    int left = 0, right = s.size() - 1;
    while (left < right) {
        while (left < right && !isalnum(s[left])) {
            left++;
        }
        while (left < right && !isalnum(s[right])) {
            right--;
        }
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        } else {
            left++;
            right--;
        }
    }
    return true;
}

void L125_isPalindrome::test() {
    string s = "A man, a plan, a canal: Panama";
    cout << isPalindrome(s) << endl;
    s = "race a car";
    cout << isPalindrome(s) << endl;
    s = " ";
    cout << isPalindrome(s) << endl;
}