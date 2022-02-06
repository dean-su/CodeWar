/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include "NumberofPeopleinBus.h"

#include <numeric>

unsigned int number2(const std::vector<std::pair<int, int>>& busStops){
  return std::accumulate(busStops.begin(), busStops.end(), 0, [](unsigned int sum, auto i) { return sum + i.first - i.second; });
}

unsigned int number1(const std::vector<std::pair<int, int>>& busStops){
  int passengers = 0;
  for(auto i: busStops)  passengers += i.first - i.second;
  return passengers;
}

unsigned int number(const vector<pair<int, int>>& busStops){
  //your code here
    int iGetinto = 0, iGetoff = 0;
    //for (auto it : busStops){
    for (const pair<int, int>& it : busStops){
        iGetinto += it.first;
        iGetoff += it.second;
    }
    
    return iGetinto - iGetoff;
}

