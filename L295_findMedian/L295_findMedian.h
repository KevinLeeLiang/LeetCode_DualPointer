//
// Created by garen_lee on 2025/5/15.
/**
  ******************************************************************************
  * @file           : L295_findMedian.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/15
  ******************************************************************************
  */
//

#ifndef L160_GETINTERSECTIONNODE_CPP_L295_FINDMEDIAN_H
#define L160_GETINTERSECTIONNODE_CPP_L295_FINDMEDIAN_H

#include"util.h"

namespace L295 {
    class MedianFinder {
    private:
        priority_queue<int, vector<int>, less<int>>queMin_;
        priority_queue<int, vector<int>, greater<int>>queMax_;
    public:
        MedianFinder() {
            this->queMin_ = priority_queue<int, vector<int>, less<int>>();
            this->queMax_ = priority_queue<int, vector<int>, greater<int>>();
        }
        void addNum(int num) ;
        double findMedian() ;
    };
}

class L295_findMedian : public LeetcodeDualPointer {
private:

public:
    L295_findMedian() {}
    void test();
};


#endif //L160_GETINTERSECTIONNODE_CPP_L295_FINDMEDIAN_H
