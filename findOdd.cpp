/*
 *Given an array, find the int that appears an odd number of times.
*There will always be only one integer that appears an odd number of times.
 */
#include "FindOdd.h"
int findOdd(const std::vector<int>& numbers){
  //your code here
    if (numbers.size() == 1)
        return numbers[0];
    int itime = 0;
    for(const int& i : numbers)
    {
       itime = count(numbers.begin(), numbers.end(), i);
       if (itime%2)
           return i;
    }
    
    return 0;
}

int findOdd1(const std::vector<int>& numbers){
  return std::accumulate(numbers.cbegin(), numbers.cend(), 0, std::bit_xor<>());
}