//
// Created by garen_lee on 2025/5/8.
/**
  ******************************************************************************
  * @file           : L234_isPalindrome.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/8
  ******************************************************************************
  */
//

#include "L234_isPalindrome.h"

bool L234_isPalindrome::recursivelyCheck(ListNode* currentNode) {
    vector<int> vals;
    while (currentNode != nullptr) {
        vals.push_back(currentNode->val);
        currentNode = currentNode->next;
    }
    for (int i = 0, j = (int)vals.size() - 1; i < j; ++i, --j) {
        if (vals[i] != vals[j]) {
            return false;
        }
    }
    return true;
}

bool L234_isPalindrome::isPalindrome(ListNode *head) {
    frontPointer = head;
    return recursivelyCheck(head);
}

void L234_isPalindrome::test() {
    vector<int>nums = {1,2,2,1};
    ListNode* head = create_list(nums);
    cout << isPalindrome(head) << endl;
    nums = {1,2};
    head = create_list(nums);
    cout << isPalindrome(head) << endl;
}