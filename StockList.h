/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StockList.h
 * Author: DeanSu
 *
 * Created on 2019年8月7日, 上午11:54
 */

#ifndef STOCKLIST_H
#define STOCKLIST_H
#include "newfile.h"
class StockList {
public:
    StockList();
    StockList(const StockList& orig);
    virtual ~StockList();
    static string stockSummary(std::vector<std::string> &lstOfArt, std::vector<std::string> &categories);
    static string stockSummary1(std::vector<std::string> &lstOfArt, std::vector<std::string> &categories);
private:

};

#endif /* STOCKLIST_H */

