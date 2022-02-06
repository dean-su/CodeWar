/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "GetMiddle.h"
#include "Utility.h"

std::string get_middle1(std::string input) 
{
  // return the middle character(s)
  std::string::size_type i, j;

	j = input.length();
	i = j % 2 == 0;
	j /= 2;
	
	return ( input.substr(j - i, i + 1));
}

std::string get_middle2(std::string input) 
{
  return input.substr((input.size()-1)/2,(input.size()+1)%2+1);
}

string get_middle(string input) 
{
  // return the middle character(s)
    cout<<"Get Middle:"<<input<<endl;
    string re;
    int ll = input.length();
    if (ll == 1)
        return input;

    if (isOdd(ll))
        re = input.at(ll/2);
    else
        re = input.substr(ll/2-1, 2);
    return re;
    
}
