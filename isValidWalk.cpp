/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 * You live in the city of Cartesia where all roads are laid out in a perfect grid. You arrived ten minutes too early to an appointment, so you decided to take the opportunity to go for a short walk. The city provides its citizens with a Walk Generating App on their phones -- everytime you press the button it sends you an array of one-letter strings representing directions to walk (eg. ['n', 's', 'w', 'e']). You always walk only a single block in a direction and you know it takes you one minute to traverse one city block, so create a function that will return true if the walk the app gives you will take you exactly ten minutes (you don't want to be early or late!) and will, of course, return you to your starting point. Return false otherwise.

Note: you will always receive a valid array containing a random assortment of direction letters ('n', 's', 'e', or 'w' only). It will never give you an empty array (that's not a walk, that's standing still!).
 */

#include "isValidWalk.h"

bool isValidWalk(std::vector<char> walk) {
  //your code here
    if(walk.size()!=10) return false;
    
    if( count(walk.begin(), walk.end(), 'n') == count(walk.begin(), walk.end(), 's') 
            && count(walk.begin(), walk.end(), 'w') == count(walk.begin(), walk.end(), 'e'))
            return true;
    else
        return false;
           
}
bool isValidWalk0(std::vector<char> walk) {
  return walk.size() == 10 and 
         std::count(walk.begin(), walk.end(), 'e') == std::count(walk.begin(), walk.end(), 'w') and
         std::count(walk.begin(), walk.end(), 'n') == std::count(walk.begin(), walk.end(), 's');
}
bool isValidWalk1(std::vector<char> walk) {
  if(walk.size() != 10) return false;
  int x=0, y=0;
  for(char c : walk){
    switch(c) {
      case 'n': y++; break;
      case 's': y--; break;
      case 'e': x++; break;
      case 'w': x--; break;
    }
  }
  if(x == 0 && y == 0) return true;
  else return false;
}

bool isValidWalk2(std::vector<char> walk) {
  //your code here
    int northCount = 0;
    int eastCount = 0;

    for (const auto &block : walk) {
        if (block == 'n') northCount++;
        if (block == 's') northCount--;
        if (block == 'e') eastCount++;
        if (block == 'w') eastCount--;
    }

    return walk.size() == 10 && northCount == 0 && eastCount == 0;

}