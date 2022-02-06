/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 * Common denominators

You will have a list of rationals in the form

 { {numer_1, denom_1} , ... {numer_n, denom_n} } 
or

 [ [numer_1, denom_1] , ... [numer_n, denom_n] ] 
or

 [ (numer_1, denom_1) , ... (numer_n, denom_n) ] 
where all numbers are positive ints.

You have to produce a result in the form

 (N_1, D) ... (N_n, D) 
or

 [ [N_1, D] ... [N_n, D] ] 
or

 [ (N_1', D) , ... (N_n, D) ] 
or

{{N_1, D} ... {N_n, D}} 
or

"(N_1, D) ... (N_n, D)"
depending on the language (See Example tests)

in which D is as small as possible and

 N_1/D == numer_1/denom_1 ... N_n/D == numer_n,/denom_n.
Example:

convertFracs [(1, 2), (1, 3), (1, 4)] `shouldBe` [(6, 12), (4, 12), (3, 12)]
 */
#include "convertFrac.h"
#include "Utility.h"

std::string Fracts::convertFrac(vector<vector<unsigned long long>> &lst)
{
    string rs;
    int imax = 0;
    for( int i = 0; i < lst.size()-1; i++)
    {
        if(imax < (lst[i][1] * lst[i+1][1])) 
            imax = lst[i][1] * lst[i+1][1];
    }

    for(int j = 0; j < lst.size(); j++)
    {
        if(!rs.empty()) rs += ",";
        rs += "("+to_string(imax*(lst[j][0])/lst[j][1]) + "," +  to_string(imax)+")";
    }

    return rs;
}