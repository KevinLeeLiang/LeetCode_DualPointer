//
// Created by garen_lee on 2025/7/3.
/**
  ******************************************************************************
  * @file           : L524_findLongestWord.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/3
  ******************************************************************************
  */
//

#include "L524_findLongestWord.h"

string L524_findLongestWord::findLongestWord(string s, vector<string>& dictionary) {
    sort(dictionary.begin(), dictionary.end(), [](string a, string b) {
        if (a.size() != b.size()) {
            return a.size() > b.size();
        } else {
            return a < b;
        }
    });
    for (int i = 0; i < dictionary.size(); i++) {
        string word = dictionary[i];
        int j = 0;
        for (int k = 0; k < s.size(); k++) {
            if (s[k] == word[j]) {
                j++;
            }
            if (j == word.size()) {
                return word;
            }
        }
    }
    return "";
}

void L524_findLongestWord::test() {
    string s = "abpcplea";
    vector<string> dictionary = {"ale","apple","monkey","plea"};
    cout << findLongestWord(s, dictionary) << endl;
    s = "abpcplea";
    dictionary = {"a","b","c"};
    cout << findLongestWord(s, dictionary) << endl;
}