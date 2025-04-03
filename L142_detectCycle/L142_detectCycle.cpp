//
// Created by garen_lee on 2025/4/3.
/**
  ******************************************************************************
  * @file           : L142_detectCycle.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/3
  ******************************************************************************
  */
//

#include "L142_detectCycle.h"
namespace L142 {
    ListNode* createLinkNode(vector<int> list_vals, int pos) {
        if (list_vals.size() == 0)
            return nullptr;
        ListNode *head = new ListNode(list_vals[0]);
        ListNode *p = head;
        ListNode *q;
        if (pos == 0) {
            q = p;
        }
        for (int i = 1; i < list_vals.size(); ++i) {
            p->next = new ListNode(list_vals[i]);
            p = p->next;
            if (i == pos) {
                q = p;
            }
            if (i == list_vals.size() - 1) {
                p->next = nullptr;
            }
        }
        if (pos != -1) {
            p->next = q;
        }
        return head;
    };
}

ListNode* L142_detectCycle::detectCycle(ListNode *head) {
    unordered_set<ListNode*> visited;
    while (head != nullptr) {
        if (visited.count(head)) {
            return head;
        }
        visited.insert(head);
        head = head->next;
    }
    return nullptr;
}

void L142_detectCycle::test() {
    vector<int>nums = {3,2,0,-4};
    int pos = 1;
    ListNode *head = L142::createLinkNode(nums, pos);
    ListNode* res = detectCycle(head);
    if (res) {
        cout << res->val << endl;
    } else {
        cout << "null" << endl;
    }
    nums = {1,2};
    pos = 0;
    head = L142::createLinkNode(nums, pos);
    res = detectCycle(head);
    if (res) {
        cout << res->val << endl;
    } else {
        cout << "null" << endl;
    }
    nums = {1};
    pos = -1;
    head = L142::createLinkNode(nums, pos);
    res = detectCycle(head);
    if (res) {
        cout << res->val << endl;
    } else {
        cout << "null" << endl;
    }
}