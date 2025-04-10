//
// Created by garen_lee on 2025/4/10.
/**
  ******************************************************************************
  * @file           : L143_recoderList.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/10
  ******************************************************************************
  */
//

#include "L143_recoderList.h"

ListNode* L143_recoderList::reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* curr = head;
    while (curr != nullptr) {
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

ListNode* L143_recoderList::middleNode(ListNode* head) {
    ListNode* f = head;
    ListNode* s = head;
    while (f->next != nullptr && f->next->next != nullptr) {
        s = s->next;
        f = f->next->next;
    }
    return s;
}

void L143_recoderList::merge(ListNode* l1, ListNode* l2) {
    ListNode* l1t = l1;
    ListNode* l2t = l2;
    while (l1 != nullptr && l2 != nullptr) {
        l1t = l1->next;
        l2t = l2->next;
        l1->next = l2;
        l1 = l1t;
        l2->next = l1;
        l2 = l2t;
    }
}

void L143_recoderList::reorderList(ListNode* head) {
    if (head == nullptr) {
        return ;
    }
    ListNode* mid = middleNode(head);
    ListNode* l1 = head;
    ListNode* l2 = mid->next;
    mid->next = nullptr;
    l2 = reverseList(l2);
    merge(l1, l2);
}

void L143_recoderList::test() {
    vector<int> nums = {1, 2, 3, 4};
    ListNode* head = create_list(nums);
    reorderList(head);
    print_list(head);
    nums = {1, 2, 3, 4, 5};
    head = create_list(nums);
    reorderList(head);
    print_list(head);
}