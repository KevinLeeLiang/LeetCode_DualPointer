//
// Created by garen_lee on 2025/6/19.
/**
  ******************************************************************************
  * @file           : L475_findRadius.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/19
  ******************************************************************************
  */
//

#include "L475_findRadius.h"

int L475_findRadius::findRadius(vector<int> &houses, vector<int> &heaters) {
    sort(houses.begin(), houses.end());
    sort(heaters.begin(), heaters.end());
    int ans = 0;
    for (int i = 0, j = 0; i < houses.size(); i++) {
        int curDistance = abs(houses[i] - heaters[j]);
        while (j < heaters.size() - 1 && abs(houses[i] - heaters[j]) >= abs(houses[i] - heaters[j + 1])) {
            j++;
            curDistance = min(curDistance, abs(houses[i] - heaters[j]));
        }
        ans = max(ans, curDistance);
    }
    return ans;
}

void L475_findRadius::test() {
    vector<int> houses = {1, 2, 3};
    vector<int> heaters = {2};
    cout << findRadius(houses, heaters) << endl;
    houses = {1, 2, 3, 4};
    heaters = {1, 4};
    cout << findRadius(houses, heaters) << endl;
    houses = {1, 5};
    heaters = {2};
    cout << findRadius(houses, heaters) << endl;
}