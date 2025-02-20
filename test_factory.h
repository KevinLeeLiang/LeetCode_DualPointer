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
#include "L15_threeSum/L15_threeSum.h"
#include "L16_threeSumClosest/L16_threeSumClosest.h"
#include "L18_fourSum/L18_fourSum.h"
#include "L19_removeNthFromEnd/L19_removeNthFromEnd.h"
#include "L26_removeDuplicates/L26_removeDuplicates.h"
#include "L27_removeElement/L27_removeElement.h"

class test_factory {
private:
    void buildSolution(string title) {
        if (title == "L5") {
            std::shared_ptr<L5_longestPalindrome> tmp= std::make_shared<L5_longestPalindrome>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDualPointer>(tmp);
        } else if (title == "L11") {
            std::shared_ptr<L11_maxArea> tmp= std::make_shared<L11_maxArea>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDualPointer>(tmp);
        } else if (title == "L15") {
            std::shared_ptr<L15_threeSum> tmp= std::make_shared<L15_threeSum>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDualPointer>(tmp);
        } else if (title == "L16") {
            std::shared_ptr<L16_threeSumClosest> tmp= std::make_shared<L16_threeSumClosest>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDualPointer>(tmp);
        } else if (title == "L18") {
            std::shared_ptr<L18_fourSum> tmp= std::make_shared<L18_fourSum>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDualPointer>(tmp);
        } else if (title == "L19") {
            std::shared_ptr<L19_removeNthFromEnd> tmp= std::make_shared<L19_removeNthFromEnd>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDualPointer>(tmp);
        } else if (title == "L26") {
            std::shared_ptr<L26_removeDuplicates> tmp= std::make_shared<L26_removeDuplicates>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDualPointer>(tmp);
        } else if (title == "L27") {
            std::shared_ptr<L27_removeElement> tmp = std::make_shared<L27_removeElement>();
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
