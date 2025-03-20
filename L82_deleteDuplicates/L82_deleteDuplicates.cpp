//
// Created by garen_lee on 2025/3/20.
/**
  ******************************************************************************
  * @file           : L82_deleteDuplicates.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/20
  ******************************************************************************
  */
//

#include "L82_deleteDuplicates.h"

ListNode* L82_deleteDuplicates::deleteDuplicates(ListNode* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    ListNode* dummy = new ListNode(-1);
    dummy->next = head;
    ListNode* cur = dummy;
    while (cur->next != nullptr && cur->next->next != nullptr) {
        if (cur->next->val == cur->next->next->val) {
            int val = cur->next->val;
            while (cur->next != nullptr && cur->next->val == val) {
                cur->next = cur->next->next;
            }
        } else {
            cur = cur->next;
        }
    }
    return dummy->next;
}

void L82_deleteDuplicates::test() {
    vector<int> nums = {1, 2, 3, 3, 4, 4, 5};
    ListNode* head = create_list(nums);
    ListNode* res = deleteDuplicates(head);
    print_list(res);
    nums = {1, 1, 1, 2, 3};
    head = create_list(nums);
    res = deleteDuplicates(head);
    print_list(res);
}