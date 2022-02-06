/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "maxSequence.h"

int maxSequence(const vector<int>& arr){
    int i = 0, j = 0, sum = 0, maxSum = 0;
    size_t isize = arr.size();
    for(i = 0; (i+4) < isize; i++)
    {
        sum = 0;
        for(j = i; j < (i+4); j++)
        {
            sum  += arr[j];
        }
        //if (maxSum < sum)
            //maxSum = sum;
        sum = std::max(0 , sum);
        maxSum = std::max(maxSum , sum);
    }
    return maxSum < 0 ? 0 : maxSum;
}