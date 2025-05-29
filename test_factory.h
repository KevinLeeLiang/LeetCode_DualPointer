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
#include "L28_strStr/L28_strStr.h"
#include "L31_nextPermutation/L31_nextPermutation.h"
#include "L42_trap/L42_trap.h"
#include "L61_rotateRight/L61_rotateRight.h"
#include "L75_sortColors/L75_sortColors.h"
#include "L80_removeDuplicates/L80_removeDuplicates.h"
#include "L82_deleteDuplicates/L82_deleteDuplicates.h"
#include "L86_partition/L86_partition.h"
#include "L88_merge/L88_merge.h"
#include "L125_isPalindrome/L125_isPalindrome.h"
#include "L141_hasCycle/L141_hasCycle.h"
#include "L142_detectCycle/L142_detectCycle.h"
#include "L143_reorderList/L143_recoderList.h"
#include "L148_sortList/L148_sortList.h"
#include "L151_reverseWords/L151_reverseWords.h"
#include "L160_getIntersectionNode/L160_getIntersectionNode.h"
#include "L165_compareVersion/L165_compareVersion.h"
#include "L167_twoSum/L167_twoSum.h"
#include "L189_rotate/L189_rotate.h"
#include "L202_isHappy/L202_isHappy.h"
#include "L234_isPalindrome/L234_isPalindrome.h"
#include "L283_moveZeroes/L283_moveZeroes.h"
#include "L287_findDuplicate/L287_findDuplicate.h"
#include "L295_findMedian/L295_findMedian.h"
#include "L321_maxNumber/L321_maxNumber.h"
#include "L344_reverseString/L344_reverseString.h"
#include "L345_reverseVowels/L345_reverseVowels.h"
#include "L349_intersection/L349_intersection.h"

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
        } else if (title == "L28") {
            std::shared_ptr<L28_strStr> tmp = std::make_shared<L28_strStr>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDualPointer>(tmp);
        } else if (title == "L31") {
            std::shared_ptr<L31_nextPermutation> tmp = std::make_shared<L31_nextPermutation>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDualPointer>(tmp);
        } else if (title == "L42") {
            std::shared_ptr<L42_trap> tmp = std::make_shared<L42_trap>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDualPointer>(tmp);
        } else if (title == "L61") {
            std::shared_ptr<L61_rotateRight> tmp = std::make_shared<L61_rotateRight>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDualPointer>(tmp);
        } else if (title == "L75") {
            std::shared_ptr<L75_sortColors> tmp = std::make_shared<L75_sortColors>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDualPointer>(tmp);
        } else if (title == "L80") {
            std::shared_ptr<L80_removeDuplicates> tmp = std::make_shared<L80_removeDuplicates>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDualPointer>(tmp);
        } else if (title == "L82") {
            std::shared_ptr<L82_deleteDuplicates> tmp = std::make_shared<L82_deleteDuplicates>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDualPointer>(tmp);
        } else if (title == "L86") {
            std::shared_ptr<L86_partition> tmp = std::make_shared<L86_partition>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDualPointer>(tmp);
        } else if (title == "L88") {
            std::shared_ptr<L88_merge> tmp = std::make_shared<L88_merge>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDualPointer>(tmp);
        } else if (title == "L125") {
            std::shared_ptr<L125_isPalindrome> tmp = std::make_shared<L125_isPalindrome>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDualPointer>(tmp);
        } else if (title == "L141") {
            std::shared_ptr<L141_hasCycle> tmp = std::make_shared<L141_hasCycle>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDualPointer>(tmp);
        } else if (title == "L142") {
            std::shared_ptr<L142_detectCycle> tmp = std::make_shared<L142_detectCycle>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDualPointer>(tmp);
        } else if (title == "L143") {
            std::shared_ptr<L143_recoderList> tmp = std::make_shared<L143_recoderList>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDualPointer>(tmp);
        } else if (title == "L148") {
            std::shared_ptr<L148_sortList> tmp = std::make_shared<L148_sortList>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDualPointer>(tmp);
        } else if (title == "L151") {
            std::shared_ptr<L151_reverseWords> tmp = std::make_shared<L151_reverseWords>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDualPointer>(tmp);
        } else if (title == "L160") {
            std::shared_ptr<L160_getIntersectionNode> tmp = std::make_shared<L160_getIntersectionNode>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDualPointer>(tmp);
        } else if (title == "L165") {
            std::shared_ptr<L165_compareVersion> tmp = std::make_shared<L165_compareVersion>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDualPointer>(tmp);
        } else if (title == "L167") {
            std::shared_ptr<L167_twoSum> tmp = std::make_shared<L167_twoSum>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDualPointer>(tmp);
        } else if (title == "L189") {
            std::shared_ptr<L189_rotate> tmp = std::make_shared<L189_rotate>();
            solution_  = std::dynamic_pointer_cast<LeetcodeDualPointer>(tmp);
        } else if (title == "L202") {
            std::shared_ptr<L202_isHappy> tmp = std::make_shared<L202_isHappy>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDualPointer>(tmp);
        } else if (title == "L234") {
            std::shared_ptr<L234_isPalindrome> tmp = std::make_shared<L234_isPalindrome>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDualPointer>(tmp);
        } else if (title == "L283") {
            std::shared_ptr<L283_moveZeroes> tmp = std::make_shared<L283_moveZeroes>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDualPointer>(tmp);
        } else if (title == "L287") {
            std::shared_ptr<L287_findDuplicate> tmp = std::make_shared<L287_findDuplicate>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDualPointer>(tmp);
        } else if (title == "L295") {
            std::shared_ptr<L295_findMedian> tmp = std::make_shared<L295_findMedian>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDualPointer>(tmp);
        } else if (title == "L321") {
            std::shared_ptr<L321_maxNumber> tmp = std::make_shared<L321_maxNumber>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDualPointer>(tmp);
        } else if (title == "L344") {
            std::shared_ptr<L344_reverseString> tmp = std::make_shared<L344_reverseString>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDualPointer>(tmp);
        } else if (title == "L345") {
            std::shared_ptr<L345_reverseVowels> tmp = std::make_shared<L345_reverseVowels>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDualPointer>(tmp);
        } else if (title == "L349") {
            std::shared_ptr<L349_intersection> tmp = std::make_shared<L349_intersection>();
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
