/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "FindSmallest.h"

int FindSmallest1(vector <int> list){
  int imin = list[0];
  //for(const int& i : list){
  for(auto i : list){
    if(i < imin) imin = i;
  }
  return imin;
}
int FindSmallest(vector <int> list)
{
   // Your Code is Here ... Hope you Enjoy 
    int imin = *list.begin();
    for(vector<int>::iterator it = ++list.begin(); it < list.end(); it++){
        if(*it < imin){
            imin = *it;
        } 
   }

  return imin;
}
/*
int main(int argc, char** argv) {
   
    cout<<"Hello FindSmallest"<<endl;
    vector<int> it = {34, 15, 88, 2};
    //vector<int> it = {34, -345, -1, 100};

    cout<<"Smallest:"<<FindSmallest1(it)<<endl;
    return 0;
}
 */