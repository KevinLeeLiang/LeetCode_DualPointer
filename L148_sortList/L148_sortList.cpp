//
// Created by garen_lee on 2025/4/10.
/**
  ******************************************************************************
  * @file           : L148_sortList.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/10
  ******************************************************************************
  */
//

#include "L148_sortList.h"

ListNode* L148_sortList::merge(ListNode* l1, ListNode* l2) {
    if (!l1) return l2;
    if (!l2) return l1;
    if (l1->val < l2->val){
        l1->next = merge(l1->next, l2);
        return l1;
    } else {
        l2->next = merge(l1, l2->next);
        return l2;
    }
}

ListNode* L148_sortList::findMiddle(ListNode *head) {
    ListNode* p = nullptr;
    ListNode* f = head;
    ListNode* s = head;
    while (f != nullptr && f->next != nullptr) {
        p = s;
        s = s->next;
        f = f->next->next;
    }
    if (p)
        p->next = nullptr;
    return s;
}

ListNode *L148_sortList::sortList(ListNode *head) {
    if (head == nullptr)
        return head;
    if (head->next == nullptr)
        return head;
    ListNode* mid = findMiddle(head);
    ListNode* left = sortList(head);
    ListNode* righ = sortList(mid);
    return merge(left, righ);
}

void L148_sortList::test() {
    vector<int>nums = {4, 2, 1, 3};
    ListNode* head = create_list(nums);
    ListNode* res = sortList(head);
    print_list(res);
    nums = {};
    head = create_list(nums);
    res = sortList(head);
    print_list(res);
}