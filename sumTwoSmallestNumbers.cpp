/*
 * Create a function that returns the sum of the two lowest positive numbers given an array of minimum 4 positive integers. No floats or non-positive integers will be passed.

*For example, when an array is passed like [19, 5, 42, 2, 77], the output should be 7.

*[10, 343445353, 3453445, 3453545353453] should return 3453455.
 */

#include "sumTwoSmallestNumbers.h"
long sumTwoSmallestNumbers(std::vector<int> numbers)
{
    long min = INT_MAX;
    long min2 = INT_MAX;
    /*   
    for(std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it){
     
      if(*it < min){
        min2 = min;
        min = *it;
      }else if(*it < min2) min2= *it;
      
    }*/ 
    for(const int i : numbers)
    {
        if(i<min)
        {
            min2 = min;
            min = i;
        } else if (i<min2)
            min2 = i;;
    }
    return min+min2;
}

long sumTwoSmallestNumbers5(std::vector<int> numbers)
{
    std::sort(numbers.begin(), numbers.end());
    
    return (long)numbers[0] + (long)numbers[1];
}

// Returns the index of the smallest number.
int smallest(std::vector<int> numbers) {
  int smallest = 1;
  for(int i = 0; i < numbers.size(); i++) 
  {
    if(numbers[i] < numbers[smallest]) {
      smallest = i;
    }
  }
  return smallest;
}

long sumTwoSmallestNumbers4(std::vector<int> numbers)
{
  int firstIndex = smallest(numbers);
  uint64_t first = numbers[smallest(numbers)];
  numbers.erase(numbers.begin() + firstIndex);

  uint64_t second = numbers[smallest(numbers)];

  return first + second;
}

long sumTwoSmallestNumbers3(std::vector<int> nums)
{
   int first_two[2];
   //std::array<int, 2> first_two; 
   std::partial_sort_copy(std::begin(nums), std::end(nums),std::begin(first_two), std::end(first_two));
   return std::accumulate(std::begin(first_two), std::end(first_two), 0);

}

long sumTwoSmallestNumbers2(std::vector<int> nums)
{
    int first_smallest = std::numeric_limits<int>::max();
    int second_smallest = first_smallest;

    for (auto&& x: nums)
    {
        if (x < first_smallest && x > 0)
        {
            second_smallest = first_smallest;
            first_smallest = x;
            continue;
        }

        if (x < second_smallest && x > 0)
        {
            second_smallest = x;
        }
    }

    return first_smallest + second_smallest;
}

long sumTwoSmallestNumbers1(std::vector<int> numbers)
{
    long long imin = numbers[0] + numbers[1];
    size_t isize = numbers.size();
    for(int i = 0; i < isize; i++)
    {
      for(int j = i+1; j < isize; j++)
      {
          if(imin > (numbers[i]+numbers[j]))
          {
              imin = 0;
            imin = numbers[i]+numbers[j];
          }
      }
    }
    return imin;
}