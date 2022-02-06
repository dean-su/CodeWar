//
// Created by DeanSu on 2019/8/18.
//Let us begin with an example:
//
//Take a number: 56789. Rotate left, you get 67895.
//
//Keep the first digit in place and rotate left the other digits: 68957.
//
//Keep the first two digits in place and rotate the other ones: 68579.
//
//Keep the first three digits and rotate left the rest: 68597. Now it is over since keeping the first four it remains only one digit which rotated is itself.
//
//You have the following sequence of numbers:
//
//56789 -> 67895 -> 68957 -> 68579 -> 68597
//
//and you must return the greatest: 68957.
//

#include "MaxRotate.h"
long long MaxRotate::maxRot(long long n) {
    string str = to_string(n);
    size_t st = str.size();
    long long iMax = 0;
    char c;
    for(int i = 0; i < st; i++){
        c = str[i];
        str.erase(i,1);
        str.push_back(c);
        iMax > atoll(str.c_str()) ? iMax: iMax = atoll(str.c_str()) ;
    }

    return iMax;
}