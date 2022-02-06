/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TwoToOne.h
 * Author: DeanSu
 *
 * Created on 2019年8月5日, 上午9:40
 */

#ifndef TWOTOONE_H
#define TWOTOONE_H
#include "newfile.h"
class TwoToOne {
public:
    TwoToOne();
    TwoToOne(const TwoToOne& orig);
    virtual ~TwoToOne();
    static std::string longest(const std::string &s1, const std::string &s2);
    static std::string longest3(const std::string &s1, const std::string &s2);
private:

};

#endif /* TWOTOONE_H */

