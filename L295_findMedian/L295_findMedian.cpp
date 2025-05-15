//
// Created by garen_lee on 2025/5/15.
/**
  ******************************************************************************
  * @file           : L295_findMedian.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/15
  ******************************************************************************
  */
//

#include "L295_findMedian.h"
using namespace L295;

void MedianFinder::addNum(int num) {
    if (queMax_.size() == queMin_.size()) {
        this->queMin_.push(num);
        this->queMax_.push(this->queMin_.top());
        this->queMin_.pop();
    } else {
        this->queMax_.push(num);
        this->queMin_.push(this->queMax_.top());
        this->queMax_.pop();
    }
}

double MedianFinder::findMedian() {
    if (this->queMin_.size() == this->queMax_.size()) {
        return (this->queMin_.top() + this->queMax_.top()) / 2.0;
    } else {
        return this->queMax_.top();
    }
}

void L295_findMedian::test() {
    MedianFinder obj;
    obj.addNum(1);
    obj.addNum(2);
    cout << obj.findMedian() << endl;
    obj.addNum(3);
    cout << obj.findMedian() << endl;
}