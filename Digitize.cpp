/*
 *Convert number to reversed array of digits
Given a random number:

C#: long;
C++: unsigned long;
You have to return the digits of this number within an array in reverse order.

Example:
348597 => [7,9,5,8,4,3]
 */
#include "Digitize.h"

vector<int> digitize(unsigned long n) 
{        
    vector<int> rv = {};
    string re = to_string(n);
    reverse(re.begin(), re.end());
    for(const char i : re)
    {
        rv.push_back(i-48);
    }
    return rv;
}
std::vector<int> digitize1(unsigned long n) 
{
    std::vector <int> num;
    while(n!=0){
        num.push_back(n%10);//fetch the LSB of the number
        n = n / 10;//right shift the number
    }
    return num;
}