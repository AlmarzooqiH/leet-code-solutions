//https://leetcode.com/problems/three-consecutive-odds/description/
#include <stdbool.h>

bool threeConsecutiveOdds(int* arr, int arrSize) {
    int counter = 0;
    for (int i = 0; i < arrSize; i++){
        if (arr[i] % 2 != 0)
            counter++;
        else
            counter = 0;
        if (counter >= 3)
            return (true);
    }
    return (false);
}
