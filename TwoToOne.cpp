/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TwoToOne.cpp
 * Author: DeanSu
 * Created on 2019年8月5日, 上午9:40
 * Take 2 strings s1 and s2 including only letters from ato z. Return a new sorted string, the longest possible, containing distinct letters,
*each taken only once - coming from s1 or s2.
*Examples:
*a = "xyaabbbccccdefww"
*b = "xxxxyyyyabklmopq"
*longest(a, b) -> "abcdefklmopqwxy"
*a = "abcdefghijklmnopqrstuvwxyz"
*longest(a, a) -> "abcdefghijklmnopqrstuvwxyz"
 */

#include "TwoToOne.h"
string TwoToOne::longest(const std::string& s1, const std::string& s2) {
    string re = s1 + s2;
    sort(re.begin(), re.end());
    string rs;
    for(int i = 0; i < re.size(); i++)
    {
        if(re[i] == re[i+1])
            continue;
        else
            rs.push_back(re[i]);
    }
    
    return rs;
}

std::string longest1(const std::string& s1, const std::string& s2) {
  std::set<char> chars(s1.begin(), s1.end());
  for (char c : s2)
    chars.insert(c);
  return std::string(chars.begin(), chars.end());
}

std::string longest2(const std::string &s1, const std::string &s2) {
    std::set<char> se;
    se.insert(s1.begin(), s1.end());
    se.insert(s2.begin(), s2.end());

    return std::string(se.begin(), se.end());
}

string TwoToOne::longest3(const std::string &s1, const std::string &s2) {
    std::string result = s1 + s2;
    sort(result.begin(), result.end());
    result.erase(std::unique(result.begin(), result.end()), result.end());
    return result;
}
TwoToOne::TwoToOne() {
}

TwoToOne::TwoToOne(const TwoToOne& orig) {
}

TwoToOne::~TwoToOne() {
}

