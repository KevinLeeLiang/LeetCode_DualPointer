//
// Created by garen_lee on 2025/3/6.
/**
  ******************************************************************************
  * @file           : L61_rotateRight.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/6
  ******************************************************************************
  */
//

#include "L61_rotateRight.h"

ListNode* L61_rotateRight::rotateRight(ListNode* head, int k) {
    if (k == 0 || head == nullptr || head->next == nullptr) {
        return head;
    }
    int n = 1;
    ListNode* cur = head;
    while (cur->next != nullptr) {
        cur = cur->next;
        n++;
    }
    int add = n - k % n;
    if (add == n)
        return head;
    cur->next = head;
    while (add--) {
        cur = cur->next;
    }
    head = cur->next;
    cur->next = nullptr;
    return head;
}

void L61_rotateRight::test() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 2;
    ListNode* head = create_list(nums);
    ListNode* res = rotateRight(head, k);
    print_list(res);
    vector<int> nums2 = {0, 1, 2};
    k = 4;
    head = create_list(nums2);
    res = rotateRight(head, k);
    print_list(res);
}