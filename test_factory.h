//
// Created by garen-lee on 2025/1/30.
/**
  ******************************************************************************
  * @file           : test_factory.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/1/30
  ******************************************************************************
  */
//

#ifndef DUALPOINTER_TEST_FACTORY_H
#define DUALPOINTER_TEST_FACTORY_H
#include <memory>
#include "L5_longestPalindrome/L5_longestPalindrome.h"
#include "L11_maxArea/L11_maxArea.h"
class test_factory {
private:
    void buildSolution(string title) {
        if (title == "L5") {
            std::shared_ptr<L5_longestPalindrome> tmp= std::make_shared<L5_longestPalindrome>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDualPointer>(tmp);
        } else if (title == "L11") {
            std::shared_ptr<L11_maxArea> tmp= std::make_shared<L11_maxArea>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDualPointer>(tmp);
        }
    }
public:
    test_factory(string title) {
        cout << "test " << title << endl;
        buildSolution(title);
    }
    void test() {
        solution_->test();
    }
    ~test_factory() {}

private:
    std::shared_ptr<LeetcodeDualPointer> solution_;
};
#endif //DUALPOINTER_TEST_FACTORY_H
