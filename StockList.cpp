/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StockList.cpp
 * Author: DeanSu
 * 
 * Created on 2019年8月7日, 上午11:54
 * A bookseller has lots of books classified in 26 categories labeled A, B, ... Z. Each book has a code c of 3, 4, 5 or more capitals letters. The 1st letter of a code is the capital letter of the book category. In the bookseller's stocklist each code c is followed by a space and by a positive integer n (int n >= 0) which indicates the quantity of books of this code in stock.

For example an extract of one of the stocklists could be:

L = {"ABART 20", "CDXEF 50", "BKWRK 25", "BTSQZ 89", "DRTYM 60"}.
or

L = ["ABART 20", "CDXEF 50", "BKWRK 25", "BTSQZ 89", "DRTYM 60"] or ....
You will be given a stocklist (e.g. : L) and a list of categories in capital letters e.g :

M = {"A", "B", "C", "W"}
or

M = ["A", "B", "C", "W"] or ...
and your task is to find all the books of L with codes belonging to each category of M and to sum their quantity according to each category.

For the lists L and M of example you have to return the string (in Haskell/Clojure a list of pairs):

(A : 20) - (B : 114) - (C : 50) - (W : 0)
where A, B, C, W are the categories, 20 is the sum of the unique book of category A, 114 the sum corresponding to "BKWRK" and "BTSQZ", 50 corresponding to "CDXEF" and 0 to category 'W' since there are no code beginning with W.

If L or M are empty return string is "" (Clojure should return an empty array instead).
 */

#include "StockList.h"

StockList::StockList() {
}

StockList::StockList(const StockList& orig) {
}

StockList::~StockList() {
}
std::string StockList::stockSummary(std::vector<std::string> &lstOfArt, std::vector<std::string> &categories) {
  if (lstOfArt.empty() || categories.empty()) return "";
  
  std::map<char, int> sum;
  
  for (auto i : lstOfArt) {
    sum[i[0]] += std::stoi(i.substr(i.find(" ")));
  }
  
  std::string result = "";
  for (auto i : categories) {
    result = result
      + (result.empty() ? "" : " - ")
      + "(" + i + " : " + std::to_string(sum[i[0]]) + ")";
  }
  
  return result;
}

string StockList::stockSummary1(std::vector<std::string> &lstOfArt, std::vector<std::string> &categories) {
    map<string, int> mrm;
    string rs;
    for(const string & ca : categories)
    {
        mrm.insert(pair<string, int>{ca, 0});
        for(const string & art : lstOfArt)
        {
            cout<<"art:"<<art<<endl;
            if(art[0] == ca[0])
            {
                auto s = mrm.find(ca);
                if (s != mrm.end()) {
                    int m = art.find(" ");
                    int p = stoi(art.substr(m));
                    s->second += p;
                } 
            }    
        }
    }
    
    size_t isize = 1;
    for(map<string, int>::iterator m = mrm.begin(); m != mrm.end(); m++)
    {    
        cout<<m->first<<" "<<m->second<<endl;
        rs += "(" + m->first + " : " + to_string(m->second) + ")"; 
        if(isize < mrm.size())
            rs += " - ";
        isize++;
    }
    return rs;
}