/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Utility.h
 * Author: DeanSu
 *
 * Created on 2019年8月2日, 上午10:55
 */

#ifndef UTILITY_H
#define UTILITY_H

#include "newfile.h"
int isOdd(const int& i);
//template <typename T> T maxof ( const T & a, const T & b );
//template <typename T> void printv(const vector<T>& v);
template <typename T>
T maxof ( const T & a, const T & b ) {
    return ( a > b ? a : b );
};
// print the elements of the vector
template <typename T>
void printv(const vector<T>& v) {
    if(v.empty()) return;
    cout<<"printv:";
    for(auto i : v) cout<< i << " ";
    cout<< endl;
};
// print the elements of the list
template<typename T>
void printl(list<T> & l) {
    if(l.empty()) return;
    for(T &i : l) cout << i << " ";
    cout << endl;
};
// print the pair
template<typename T1, typename T2>
void printpair(pair<T1, T2> & p) {
    cout << p.first << " : " << p.second << endl;
};
// print the elements of the array
template<typename T, size_t N>
void printa(array<T, N> & a) {
    for(T &i : a) cout << i << " ";
    cout << endl;
};
#endif /* UTILITY_H */

