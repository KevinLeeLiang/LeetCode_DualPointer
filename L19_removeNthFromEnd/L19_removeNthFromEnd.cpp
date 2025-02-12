//
// Created by garen_lee on 2025/2/12.
/**
  ******************************************************************************
  * @file           : L19_removeNthFromEnd.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/12
  ******************************************************************************
  */
//

#include "L19_removeNthFromEnd.h"
ListNode* L19_removeNthFromEnd::removeNthFromEnd(ListNode* head, int n) {
    if (head == nullptr) {
        return nullptr;
    }

    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* fast = dummy;
    ListNode* slow = dummy;
    for (int i = 0; i < n; i++) {
        fast = fast->next;
    }
    while (fast->next != nullptr) {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = slow->next->next;
    return dummy->next;
}
void L19_removeNthFromEnd::test() {
    vector<int>vals = {1, 2, 3, 4, 5};
    int n = 2;
    ListNode* root = create_list(vals);
    ListNode* res = removeNthFromEnd(root, n);
    print_list(res);
    delete_list(res);
    vals = {1};
    n = 1;
    root = create_list(vals);
    res = removeNthFromEnd(root, n);
    print_list(res);
    delete_list(res);
    vals = {1, 2};
    n = 1;
    root = create_list(vals);
    res = removeNthFromEnd(root, n);
    print_list(res);
    delete_list(res);
}